//
//  GATracker.h
//
//  Created by Jota Melo on 12/13/15.
//  Copyright © 2015 Jota. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GATracker : NSObject

NS_ASSUME_NONNULL_BEGIN
@property (strong, nonatomic) NSString *clientID;
@property (strong, nonatomic) NSString *appName;
@property (strong, nonatomic) NSString *appVersion;
@property (strong, nonatomic) NSString *MPVersion; // Measurement Protocol version
@property (strong, nonatomic) NSString *userAgent;
NS_ASSUME_NONNULL_END

+ (instancetype _Nonnull)sharedInstance;

- (void)setTrackingID:(NSString * _Nonnull)trackingID;

- (void)send:(NSString * _Nonnull)type parameters:(NSDictionary * _Nullable)userParams;

- (void)screenView:(NSString * _Nonnull)screenName customParameters:(NSDictionary * _Nullable)userParams;

- (void)eventWithCategory:(NSString * _Nonnull)category
                   action:(NSString * _Nonnull)action
                    label:(NSString * _Nullable)label
         customParameters:(NSDictionary * _Nullable)userParams;

- (void)exceptionWithDescription:(NSString * _Nonnull)description fatal:(BOOL)fatal customParameters:(NSDictionary * _Nullable)userParams;

@end
