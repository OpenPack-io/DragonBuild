//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BRNotificationReceiver;

@protocol BRNotificationReceiverDelegate <NSObject>
- (void)notificationReceiverDidReceiveNotifications:(BRNotificationReceiver *)arg1;
- (void)notificationsReceiverDidReceiveNotificationsBatch:(BRNotificationReceiver *)arg1;
- (void)notificationsReceiverDidFinishGathering:(BRNotificationReceiver *)arg1;
- (void)notificationsReceiverDidInvalidate:(BRNotificationReceiver *)arg1;
@end

