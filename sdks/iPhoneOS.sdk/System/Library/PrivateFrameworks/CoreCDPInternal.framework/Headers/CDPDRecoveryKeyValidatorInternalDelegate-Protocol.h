//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString;

@protocol CDPDRecoveryKeyValidatorInternalDelegate <NSObject>
- (NSString *)generateRecoveryKeyWithInfo:(NSDictionary *)arg1 error:(id )arg2;
- (void)enableBackupWithRecoveryKey:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

