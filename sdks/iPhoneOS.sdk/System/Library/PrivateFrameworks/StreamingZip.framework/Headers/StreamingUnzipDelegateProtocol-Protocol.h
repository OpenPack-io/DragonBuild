//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol StreamingUnzipDelegateProtocol
- (void)extractionEnteredPassThroughMode;
- (void)extractionCompleteAtArchivePath:(NSString *)arg1;
- (void)setExtractionProgress:(double)arg1;
@end

