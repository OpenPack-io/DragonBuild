//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDMedicalRecordEntity.h>

@interface HDVaccinationRecordEntity : HDMedicalRecordEntity
{
}

+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* CDUnknownBlockType */)arg5;
+ (BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (BOOL)isConcreteEntity;
+ (long long)preferredEntityType;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id )arg5;
+ (const CDStruct_4c492439 )columnDefinitionsWithCount:(NSUInteger )arg1;
+ (id)databaseTable;

@end

