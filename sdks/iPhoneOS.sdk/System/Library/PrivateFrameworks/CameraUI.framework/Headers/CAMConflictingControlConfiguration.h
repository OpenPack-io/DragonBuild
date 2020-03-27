//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMConflictingControlConfiguration : NSObject
{
    long long _desiredFlashMode;
    long long _desiredHDRMode;
    long long _flashAndHDRConflictingControl;
}

+ (void)resolveDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 primaryConflictingControl:(long long)arg3 device:(long long)arg4 toFlashMode:(long long )arg5 HDRMode:(long long )arg6;
@property(readonly, nonatomic) long long flashAndHDRConflictingControl; // @synthesize flashAndHDRConflictingControl=_flashAndHDRConflictingControl;
@property(readonly, nonatomic) long long desiredHDRMode; // @synthesize desiredHDRMode=_desiredHDRMode;
@property(readonly, nonatomic) long long desiredFlashMode; // @synthesize desiredFlashMode=_desiredFlashMode;
- (id)init;
- (id)initWithDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 flashAndHDRConflictingControl:(long long)arg3;

@end

