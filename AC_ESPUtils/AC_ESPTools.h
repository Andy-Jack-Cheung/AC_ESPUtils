//
//  AC_EspNetUtils.h
//
//  Created by Andy Cheung on 2021/5/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface AC_ESPTools : NSObject

+ (nullable NSString *)getCurrentWiFiSsid;
+ (nullable NSString *)getCurrentBSSID;

+ (NSString *)getIPAddress:(BOOL)preferIPv4;

+ (NSDictionary *)getIPAddresses;
NS_ASSUME_NONNULL_END
@end

