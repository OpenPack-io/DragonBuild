//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASEntitlement : NSObject
{
}

+ (BOOL)_trueBooleanEntitlementCheckWithSecTask:(struct __SecTask )arg1 entitlement:(id)arg2 logHandle:(id)arg3;
+ (BOOL)taskWithAuditToken:(CDStruct_6ad76789)arg1 hasTrueBooleanEntitlement:(id)arg2 logHandle:(id)arg3;
+ (BOOL)hasTrueBooleanEntitlement:(id)arg1 logHandle:(id)arg2;

@end

