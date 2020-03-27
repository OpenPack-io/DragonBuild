//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLitePredicate.h>

@interface HDAssociationEntityAssociationExistsPredicate : HDSQLitePredicate
{
    long long _assocationID;
    BOOL _exists;
}

+ (id)predicateWithAssociationID:(long long)arg1 exists:(BOOL)arg2;
- (id)description;
- (void)bindToStatement:(struct sqlite3_stmt )arg1 bindingIndex:(int )arg2;
- (id)SQLForEntityClass:(Class)arg1;

@end

