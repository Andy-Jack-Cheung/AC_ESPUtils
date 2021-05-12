//
//  AC_ESPAES.h
//
//  Created by Andy Cheung on 2021/5/11.
//

#import <Foundation/Foundation.h>

@interface AC_ESPAES : NSObject {
    @private NSString *key;
}

- (instancetype)initWithKey:(NSString *)secretKey;

- (NSData *)AES128EncryptData:(NSData *)data;
- (NSData *)AES128DecryptData:(NSData *)data;

@end
