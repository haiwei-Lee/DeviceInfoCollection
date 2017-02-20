//
//  QBDeviceInfoCollection.m
//  DeviceInfo
//
//  Created by 李海威 on 2017/2/19.
//  Copyright © 2017年 cashpie. All rights reserved.
//

#import "QBDeviceInfoCollection.h"
#import "QBDeviceInfo.h"

@interface QBDeviceInfoCollection ()

@property (nonatomic, readwrite) NSTimeInterval currentTimestamp;
@property (nonatomic, copy, readwrite) NSString * timestampString;
@property (nonatomic, copy, readwrite) NSString * appDisplayName;
@property (nonatomic, copy, readwrite) NSString * appVersion;
@property (nonatomic, copy, readwrite) NSString * systemVersion;
@property (nonatomic, copy, readwrite) NSString * systemName;
@property (nonatomic, copy, readwrite) NSString * preferredLanguage;
@property (nonatomic, copy, readwrite) NSString * phoneModel;
@property (nonatomic, copy, readwrite) NSString * deviceName;
@property (nonatomic, readwrite) CGFloat batteryLevel;
@property (nonatomic, readwrite) long long totalMemorySize;
@property (nonatomic, readwrite) long long availableMemorySize;
@property (nonatomic, readwrite) long long totalDiskSize;
@property (nonatomic, readwrite) long long availableDiskSize;
@property (nonatomic, copy, readwrite) NSString * idfa;
@property (nonatomic, copy, readwrite) NSString * idfv;
@property (nonatomic, copy, readwrite) NSString * countryCode;
@property (nonatomic, copy, readwrite) NSString * telephonyCarrier;
@property (nonatomic, copy, readwrite) NSString * mobileCountryCode;
@property (nonatomic, copy, readwrite) NSString * mobileNetworkCode;
@property (nonatomic, copy, readwrite) NSString * ipAddress;
@property (nonatomic, copy, readwrite) NSString * wifiIpAddress;
@property (nonatomic, copy, readwrite) NSString * wifiName;
@property (nonatomic, readwrite) BOOL jailbroken;
@property (nonatomic, readwrite) CGFloat brightness;
@property (nonatomic, copy, readwrite) NSString * dns;
@property (nonatomic, copy, readwrite) NSString * networkType;

@end

@implementation QBDeviceInfoCollection

+ (QBDeviceInfoCollection *)shareDeviceInfoCollection{

    static QBDeviceInfoCollection * deviceInfo = nil;
    
    static dispatch_once_t token ;
    dispatch_once(&token,^{
        deviceInfo = [[self alloc]init];
    
    });
    return deviceInfo;
}

- (instancetype)init{

    if (self = [super init]) {
        _currentTimestamp = [QBDeviceInfo applicationLaunchedCurrentTimestamp];
        _timestampString = [QBDeviceInfo applicationTimestampString];
        _appDisplayName = [QBDeviceInfo applicationDisplayName];
        _appVersion = [QBDeviceInfo applicationVersion];
        _systemVersion = [QBDeviceInfo phoneSystemVersion];
        _preferredLanguage = [QBDeviceInfo systemPreferredLanguage];
        _phoneModel = [QBDeviceInfo phoneModel];
        _deviceName = [QBDeviceInfo deviceName];
        _batteryLevel = [QBDeviceInfo batteryLevel];
        _totalMemorySize = [QBDeviceInfo totalMemorySize];
        _availableMemorySize = [QBDeviceInfo availableMemorySize];
        _totalDiskSize = [QBDeviceInfo totalDiskSize];
        _availableDiskSize = [QBDeviceInfo availableDiskSize];
        _idfa = [QBDeviceInfo advertisingIdentifier];
        _countryCode = [QBDeviceInfo localCountryCode];
        _telephonyCarrier = [QBDeviceInfo telephonyCarrier];
        _mobileCountryCode = [QBDeviceInfo mobileCountryCode];
        _mobileNetworkCode = [QBDeviceInfo mobileNetworkCode];
        _ipAddress = [QBDeviceInfo deviceIpAddress];
        _wifiIpAddress = [QBDeviceInfo localWifiIpAddress];
        _wifiName = [QBDeviceInfo wifiName];
        _jailbroken = [QBDeviceInfo jailbrokenDevice];
        _brightness = [QBDeviceInfo brightness];
        _dns = [QBDeviceInfo domainNameSystemIp];
        _networkType = [QBDeviceInfo networkType];
        _idfv = [QBDeviceInfo identifierForVendor];
    }

    return self;
}

-(NSString *)description{

    return [NSString stringWithFormat:@"时间戳--%f,\n系统时间--%@,\n应用名称--%@,\n应用版本--%@,\n系统版本--%@,\n当前语言--%@,\n设备名称--%@,\n剩余电量--%f,\n总内存容量--%lld,\n可用内存--%lld,\n总存储空间--%lld,\n可用存储空间--%lld,\nIDFA--%@,\nIDFV--%@,\n国家代码--%@,\n运营商--%@,\nMCC--%@,\nMNC--%@,\nIP--%@,\nWifiIP--%@,\nWifiName--%@,\n是否越狱--%d,\n屏幕亮度--%f,\nDNS--%@,\n网络接入类型--%@",_currentTimestamp,_timestampString,_appDisplayName,_appVersion,_systemVersion,_preferredLanguage,_deviceName,_batteryLevel,_totalMemorySize,_availableMemorySize,_totalDiskSize,_availableDiskSize,_idfa,_idfv,_countryCode,_telephonyCarrier,_mobileCountryCode,_mobileNetworkCode,_ipAddress,_wifiIpAddress,_wifiName,_jailbroken,_brightness,_dns,_networkType];

}

@end
