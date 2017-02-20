//
//  QBDeviceInfoCollection.h
//  DeviceInfo
//
//  Created by 李海威 on 2017/2/19.
//  Copyright © 2017年 cashpie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface QBDeviceInfoCollection : NSObject

+ (QBDeviceInfoCollection *)shareDeviceInfoCollection;

@property (nonatomic, readonly) NSTimeInterval currentTimestamp;
@property (nonatomic, copy, readonly) NSString * timestampString;
@property (nonatomic, copy, readonly) NSString * appDisplayName;
@property (nonatomic, copy, readonly) NSString * appVersion;
@property (nonatomic, copy, readonly) NSString * systemVersion;
@property (nonatomic, copy, readonly) NSString * systemName;
@property (nonatomic, copy, readonly) NSString * preferredLanguage;
@property (nonatomic, copy, readonly) NSString * phoneModel;
@property (nonatomic, copy, readonly) NSString * deviceName;
@property (nonatomic, readonly) CGFloat batteryLevel;
@property (nonatomic, readonly) long long totalMemorySize;
@property (nonatomic, readonly) long long availableMemorySize;
@property (nonatomic, readonly) long long totalDiskSize;
@property (nonatomic, readonly) long long availableDiskSize;
@property (nonatomic, copy, readonly) NSString * idfa;
@property (nonatomic, copy, readonly) NSString * idfv;
@property (nonatomic, copy, readonly) NSString * countryCode;
@property (nonatomic, copy, readonly) NSString * telephonyCarrier;
@property (nonatomic, copy, readonly) NSString * mobileCountryCode;
@property (nonatomic, copy, readonly) NSString * mobileNetworkCode;
@property (nonatomic, copy, readonly) NSString * ipAddress;
@property (nonatomic, copy, readonly) NSString * wifiIpAddress;
@property (nonatomic, copy, readonly) NSString * wifiName;
@property (nonatomic, readonly) BOOL jailbroken;
@property (nonatomic, readonly) CGFloat brightness;
@property (nonatomic, copy, readonly) NSString * dns;
@property (nonatomic, copy, readonly) NSString * networkType;

@end
