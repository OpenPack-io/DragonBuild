//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSetting.h>

@interface NUArraySetting : NUSetting
{
    NUSetting *_content;
}

+ (id)deserializeFromDictionary:(id)arg1 error:(out id )arg2;
+ (id)supportedAttributes;
@property(readonly) NUSetting *content; // @synthesize content=_content;
// - (void).cxx_destruct;
- (BOOL)serializeIntoDictionary:(id)arg1 error:(out id )arg2;
- (id)deserialize:(id)arg1 error:(out id )arg2;
- (id)serialize:(id)arg1 error:(out id )arg2;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id )arg3;
- (id)copyArray:(id)arg1;
- (id)copy:(id)arg1;
- (BOOL)validate:(id)arg1 error:(out id )arg2;
- (BOOL)validateAttribute:(id)arg1 value:(id)arg2 error:(out id )arg3;
- (BOOL)isValid:(out id )arg1;
- (id)description;
- (id)initWithContent:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (id)init;

@end

