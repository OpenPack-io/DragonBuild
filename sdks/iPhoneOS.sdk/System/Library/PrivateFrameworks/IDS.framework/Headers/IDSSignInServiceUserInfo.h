//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSSignInServiceUserInfo : NSObject
{
    NSUInteger _type;
    NSUInteger _status;
}

@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUInteger status; // @synthesize status=_status;
- (id)description;
- (id)initWithUserType:(NSUInteger)arg1 status:(NSUInteger)arg2;

@end

