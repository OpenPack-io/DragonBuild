//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSURL;

@interface NSError (FPFSHelpers)
+ (id)fp_errorForCollisionWithURL:(id)arg1;
+ (id)fileProviderErrorForNonExistentItemWithIdentifier:(id)arg1;
+ (id)fileProviderErrorForOutOfDateItem:(id)arg1;
+ (id)fileProviderErrorForCollisionWithItem:(id)arg1;
@property(readonly, nonatomic) NSURL *fp_collidingURL;
@end

