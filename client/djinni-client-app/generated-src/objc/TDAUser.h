// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client.djinni

#import <Foundation/Foundation.h>

@interface TDAUser : NSObject
- (nonnull instancetype)initWithId:(int32_t)id
                          username:(nonnull NSString *)username
                          password:(nonnull NSString *)password
                              auth:(int32_t)auth
                          deviceid:(nonnull NSString *)deviceid;
+ (nonnull instancetype)userWithId:(int32_t)id
                          username:(nonnull NSString *)username
                          password:(nonnull NSString *)password
                              auth:(int32_t)auth
                          deviceid:(nonnull NSString *)deviceid;

@property (nonatomic, readonly) int32_t id;

@property (nonatomic, readonly, nonnull) NSString * username;

@property (nonatomic, readonly, nonnull) NSString * password;

@property (nonatomic, readonly) int32_t auth;

@property (nonatomic, readonly, nonnull) NSString * deviceid;

@end
