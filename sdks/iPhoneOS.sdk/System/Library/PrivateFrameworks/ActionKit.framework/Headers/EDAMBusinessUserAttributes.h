//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMBusinessUserAttributes : FATObject
{
    NSString *_title;
    NSString *_location;
    NSString *_department;
    NSString *_mobilePhone;
    NSString *_linkedInProfileUrl;
    NSString *_workPhone;
    NSNumber *_companyStartDate;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *companyStartDate; // @synthesize companyStartDate=_companyStartDate;
@property(retain, nonatomic) NSString *workPhone; // @synthesize workPhone=_workPhone;
@property(retain, nonatomic) NSString *linkedInProfileUrl; // @synthesize linkedInProfileUrl=_linkedInProfileUrl;
@property(retain, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(retain, nonatomic) NSString *department; // @synthesize department=_department;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;

@end

