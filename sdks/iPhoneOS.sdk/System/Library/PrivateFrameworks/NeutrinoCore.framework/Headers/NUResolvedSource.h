//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSource.h>

@class NUSourceDefinition;

@interface NUResolvedSource : NUSource
{
    NUSourceDefinition *_resolvedSourceDefinition;
}

@property(retain) NUSourceDefinition *resolvedSourceDefinition; // @synthesize resolvedSourceDefinition=_resolvedSourceDefinition;
// - (void).cxx_destruct;
- (id)description;
- (id)sourceDefinition:(out id )arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

