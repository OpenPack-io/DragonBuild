//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUAuxiliaryImageProperties-Protocol.h>

@class NSDictionary, NSString;
@protocol NUAuxiliaryImage;

@interface NUCGAuxiliaryImageProperties : NSObject <NUAuxiliaryImageProperties>
{
    id _imageSource;
    NSString *_auxiliaryImageTypeCGIdentifier;
    NSDictionary *_auxCoreGraphicsInfoDictionary;
    id <NUAuxiliaryImage> _auxImage;
    CDStruct_d58201db _size;
}

@property(retain) id <NUAuxiliaryImage> auxImage; // @synthesize auxImage=_auxImage;
@property(retain) NSDictionary *auxCoreGraphicsInfoDictionary; // @synthesize auxCoreGraphicsInfoDictionary=_auxCoreGraphicsInfoDictionary;
@property CDStruct_912cb5d2 size; // @synthesize size=_size;
@property(readonly) NSString *auxiliaryImageTypeCGIdentifier; // @synthesize auxiliaryImageTypeCGIdentifier=_auxiliaryImageTypeCGIdentifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)auxiliaryImage:(out id )arg1;
- (id)auxiliaryCoreGraphicsInfoDictionary:(out id )arg1;
- (id)initWithCGProperties:(id)arg1 imageSource:(CGImageSource )arg2;

@end

