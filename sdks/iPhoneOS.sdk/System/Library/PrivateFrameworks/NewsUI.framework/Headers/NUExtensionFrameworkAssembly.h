//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NFFrameworkAssembly-Protocol.h>

@class NSArray;

@interface NUExtensionFrameworkAssembly : NSObject <NFFrameworkAssembly>
{
    NSArray *_assemblies;
}

@property(readonly, copy, nonatomic) NSArray *assemblies; // @synthesize assemblies=_assemblies;
// - (void).cxx_destruct;
- (id)initWithExtensionContextProvider:(id)arg1;

@end

