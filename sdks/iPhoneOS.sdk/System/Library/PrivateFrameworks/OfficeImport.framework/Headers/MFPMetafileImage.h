//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/MFPImage.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MFPMetafileImage : MFPImage
{
    NSData *mMetafileData;
}

// - (void).cxx_destruct;
- (id)phoneImage;
- (void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 unit:(int)arg3 effect:(id)arg4;
- (id)initWithMetafileData:(id)arg1;

@end

