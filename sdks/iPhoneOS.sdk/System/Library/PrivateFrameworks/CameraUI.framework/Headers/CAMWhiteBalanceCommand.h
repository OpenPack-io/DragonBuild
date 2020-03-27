//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMWhiteBalanceCommand : CAMCaptureCommand
{
    BOOL __matchExposureMode;
    long long __whiteBalanceMode;
}

@property(readonly, nonatomic) long long _whiteBalanceMode; // @synthesize _whiteBalanceMode=__whiteBalanceMode;
@property(readonly, nonatomic) BOOL _matchExposureMode; // @synthesize _matchExposureMode=__matchExposureMode;
- (id)_descriptionForWhiteBalanceMode:(long long)arg1;
- (void)executeWithContext:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchExposureMode;
- (id)initWithWhiteBalanceMode:(long long)arg1;

@end

