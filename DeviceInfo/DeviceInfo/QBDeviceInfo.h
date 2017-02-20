//
//  QBDeviceInfo.h
//  DeviceInfo
//
//  Created by 李海威 on 2017/2/19.
//  Copyright © 2017年 cashpie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface QBDeviceInfo : NSObject

/**
 获取当前时间戳

 @return 时间戳
 */
+ (NSTimeInterval)applicationLaunchedCurrentTimestamp;

/**
 当前时间

 @return yyyy-MM-dd HH:mm
 */
+ (NSString *)applicationTimestampString;
/**
 应用名称

 @return 应用名称
 */
+ (NSString *)applicationDisplayName;

/**
 应用版本号

 @return 应用版本号
 */
+ (NSString *)applicationVersion;

/**
 系统版本号

 @return 系统版本号
 */
+ (NSString *)phoneSystemVersion;

/**
 系统名称

 @return 系统名称
 */
+ (NSString *)phoneSystemName;

/**
 系统使用语言

 @return 系统使用语言
 */
+ (NSString *)systemPreferredLanguage;

/**
 手机型号

 @return 手机型号
 */
+ (NSString *)phoneModel;

/**
 设备类型

 @return 设备类型
 */
+ (NSString *)deviceName;

/**
 电池状态

 @return 电池状态
 */
+ (CGFloat)batteryLevel;

/**
 总内存大小

 @return 总内存大小
 */
+ (long long)totalMemorySize;

+ (NSString *)totalMemorySizeString;
/**
 手机可用内存

 @return  手机可用内存
 */
+ (long long)availableMemorySize;
+ (NSString *)availableMemorySizeString;
/**
 总磁盘容量

 @return 总磁盘容量
 */
+ (long long)totalDiskSize;
+ (NSString *)totalDiskSizeString;

/**
 可用磁盘空间

 @return 可用磁盘空间
 */
+ (long long)availableDiskSize;
+ (NSString *)availableDiskSizeString;

 // 广告位标识符：在同一个设备上的所有App都会取到相同的值，是苹果专门给各广告提供商用来追踪用户而设的，用户可以在 设置|隐私|广告追踪里重置此id的值，或限制此id的使用，故此id有可能会取不到值，但好在Apple默认是允许追踪的，而且一般用户都不知道有这么个设置，所以基本上用来监测推广效果，是戳戳有余了  注意：Appstore禁止不使用广告而采集IDFA的app上架
+ (NSString *)advertisingIdentifier;

//由数字和字母组成的用来标识唯一设备的字符串 根据vendor的值，如果vendor相同，则返回同一字符串；如果vendor不同，则返回不同的字符串
//根据xcode文档解释，正常情况下，会根据App Store提供的数据进行判断。但是如果app不是通过app store进行安装的(如企业应用或开发调试阶段)，那么会根据bundle ID判断。vendor非常简单：一个Vendor是CFBundleIdentifier（反转DNS格式）的前两部分
+ (NSString *)identifierForVendor;

/**
 所在国家

 @return 所在国家
 */
+ (NSString *)localCountryCode;
/**
 运营商

 @return 运营商
 */
+ (NSString *)telephonyCarrier;


/**
 mcc

 @return mcc
 */
+ (NSString *)mobileCountryCode;

/**
 mnc

 @return mnc
 */
+ (NSString *)mobileNetworkCode;

/**
 设备ip

 @return 设备ip
 */
+ (NSString *)deviceIpAddress;

/**
 本地WiFi地址

 @return 本地WiFi地址
 */
+ (NSString *)localWifiIpAddress;

/**
 WiFi名称

 @return  WiFi名称
 */
+ (NSString *)wifiName;

/**
 是否越狱

 @return yes/no
 */
+ (BOOL)jailbrokenDevice;

/**
 屏幕亮度

 @return 屏幕亮度
 */
+ (CGFloat)brightness;

/**
 DNS

 @return DNS
 */
+ (NSString *)domainNameSystemIp;

/**
 network type

 @return network type
 */
+ (NSString *)networkType;

@end


NS_INLINE NSDictionary * appInfoDictionary (void){

    return [[NSBundle mainBundle] infoDictionary];
}

NS_INLINE UIDevice * currentDevice (void){

    return [UIDevice currentDevice];
}
