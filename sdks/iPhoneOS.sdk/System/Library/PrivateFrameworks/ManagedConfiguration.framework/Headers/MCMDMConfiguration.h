//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface MCMDMConfiguration : NSObject
{
    BOOL _isUserEnrollment;
    BOOL _memberQueueUseDevelopmentAPNS;
    BOOL _memberQueueSignMessage;
    int _memberQueueAccessRights;
    NSString *_memberQueueManagingProfileIdentifier;
    NSDictionary *_memberQueueOrganizationInfo;
    NSURL *_memberQueueServerURL;
    NSString *_personaID;
    NSString *_easEnrollmentID;
    NSObject<OS_dispatch_queue> *_memberQueue;
    struct __SecIdentity _memberQueueIdentity;
    NSString *_memberQueueTopic;
    NSURL *_memberQueueCheckInURL;
    NSDictionary *_memberQueueMDMOptions;
    NSString *_memberQueuePushMagic;
}

+ (id)sharedConfiguration;
@property(nonatomic) BOOL memberQueueSignMessage; // @synthesize memberQueueSignMessage=_memberQueueSignMessage;
@property(retain, nonatomic) NSString *memberQueuePushMagic; // @synthesize memberQueuePushMagic=_memberQueuePushMagic;
@property(nonatomic) BOOL memberQueueUseDevelopmentAPNS; // @synthesize memberQueueUseDevelopmentAPNS=_memberQueueUseDevelopmentAPNS;
@property(nonatomic) int memberQueueAccessRights; // @synthesize memberQueueAccessRights=_memberQueueAccessRights;
@property(retain, nonatomic) NSDictionary *memberQueueMDMOptions; // @synthesize memberQueueMDMOptions=_memberQueueMDMOptions;
@property(retain, nonatomic) NSURL *memberQueueCheckInURL; // @synthesize memberQueueCheckInURL=_memberQueueCheckInURL;
@property(retain, nonatomic) NSString *memberQueueTopic; // @synthesize memberQueueTopic=_memberQueueTopic;
@property(nonatomic) struct __SecIdentity memberQueueIdentity; // @synthesize memberQueueIdentity=_memberQueueIdentity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(retain, nonatomic) NSString *easEnrollmentID; // @synthesize easEnrollmentID=_easEnrollmentID;
@property(retain, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(nonatomic) BOOL isUserEnrollment; // @synthesize isUserEnrollment=_isUserEnrollment;
@property(retain, nonatomic) NSURL *memberQueueServerURL; // @synthesize memberQueueServerURL=_memberQueueServerURL;
@property(retain, nonatomic) NSDictionary *memberQueueOrganizationInfo; // @synthesize memberQueueOrganizationInfo=_memberQueueOrganizationInfo;
@property(retain, nonatomic) NSString *memberQueueManagingProfileIdentifier; // @synthesize memberQueueManagingProfileIdentifier=_memberQueueManagingProfileIdentifier;
// - (void).cxx_destruct;
- (void)memberQueueForgetCurrentConfiguration;
- (BOOL)readConfigurationOutError:(id )arg1;
- (void)refreshDetailsFromDisk;
- (id)init;

@end

