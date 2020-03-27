//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/TTVersionedDocument.h>

@class CRDocument, CROrderedSet, NSUUID;

@interface ICCRDTIdentifierOrderedSetVersionedDocument : TTVersionedDocument
{
    NSUUID *_replica;
    CROrderedSet *_orderedSet;
    CRDocument *_document;
}

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
@property(readonly) CRDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) CROrderedSet *orderedSet; // @synthesize orderedSet=_orderedSet;
// - (void).cxx_destruct;
- (id)serializeCurrentVersion:(unsigned int )arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
@property(readonly, nonatomic) NSUUID *replica; // @synthesize replica=_replica;
- (NSUInteger)mergeWithIdentifierOrderedSetVersionedDocument:(id)arg1;

@end

