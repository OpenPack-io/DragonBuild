//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharedWebCredentials/SWCRedactedDescription-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, _SWCGeneration, _SWCServiceSpecifier;

@interface _SWCServiceSettings : NSObject <NSXPCListenerDelegate, SWCRedactedDescription, NSSecureCoding>
{
    NSMutableDictionary *_dict;
    unsigned int _hasChanges:1;
    _SWCServiceSpecifier *_serviceSpecifier;
    _SWCGeneration *_generation;
}

+ (BOOL)supportsSecureCoding;
+ (void)postChangeNotificationForServiceSpecifier:(id)arg1;
+ (void)serviceSettingsDidChange:(id)arg1;
+ (id)serviceSettingsWithServiceSpecifier:(id)arg1 error:(id )arg2;
+ (id)notificationCenter;
+ (BOOL)removeObjectsForKeys:(id)arg1 serviceSpecifier:(id)arg2 error:(id )arg3;
+ (BOOL)removeObjectsForKeys:(id)arg1 serviceType:(id)arg2 error:(id )arg3;
+ (id)_log;
@property(readonly) _SWCGeneration *generation; // @synthesize generation=_generation;
@property(readonly) _SWCServiceSpecifier *serviceSpecifier; // @synthesize serviceSpecifier=_serviceSpecifier;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)redactedDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (id)_initWithServiceSpecifier:(id)arg1 dictionary:(id)arg2 generation:(id)arg3;
@property(readonly) BOOL hasChanges;
- (BOOL)commitReturningError:(id )arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;

@end

