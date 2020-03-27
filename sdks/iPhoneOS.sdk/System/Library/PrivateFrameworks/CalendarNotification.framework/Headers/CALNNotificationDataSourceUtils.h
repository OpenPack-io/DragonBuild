//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CALNNotificationDataSourceUtils : NSObject
{
}

+ (void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2;
+ (void)hideCalendarFromNotificationCenter:(id)arg1 inEventStore:(id)arg2;
+ (void)reportSharedCalendarInvitationAsJunkWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2;
+ (void)respondToSharedCalendarInvitationWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 withDataAccessExpressConnection:(id)arg3 accept:(BOOL)arg4;
+ (id)calendarWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2;
+ (id)eventWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2;
+ (id)notificationReferenceOfType:(int)arg1 withSourceClientIdentifier:(id)arg2 inEventStore:(id)arg3 withNotificationReferenceProvider:(id)arg4;
+ (id)sourceClientIdentifierForNotification:(id)arg1;
+ (id)objectIDWithSourceClientIdentifier:(id)arg1;

@end

