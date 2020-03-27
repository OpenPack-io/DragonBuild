//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (OSAStackshotKCDataExtension)
- (void)addWaitInfoDesc:(struct stackshot_thread_waitinfo )arg1 count:(unsigned int)arg2;
- (void)addTurnstileInfoDesc:(struct stackshot_thread_turnstileinfo )arg1 count:(unsigned int)arg2;
- (BOOL)osa_logCounter_isLog:(id)arg1 byKey:(id)arg2 count:(NSUInteger )arg3 withinLimit:(NSUInteger )arg4 withOptions:(id)arg5;
- (void)osa_logCounter_recordNixedDuplicate:(const char )arg1;
- (NSUInteger)osa_logCounter_getForSubtype:(id)arg1 forOwner:(id)arg2;
- (void)osa_logCounter_countLogTypes_internal:(id)arg1 forOwner:(id)arg2;
- (void)osa_logCounter_incrementForSubtype:(id)arg1 signature:(id)arg2 filepath:(const char )arg3;
- (void)osa_logCounter_incrementForSubtype_internal:(id)arg1 signature:(id)arg2 filepath:(const char )arg3;
@end

