//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXConnector : NSObject
{
}

+ (id)readFromXmlNode:(struct _xmlNode )arg1 inNamespace:(id)arg2 drawingState:(id)arg3;
+ (void)readNonVisualConnectorProperties:(struct _xmlNode )arg1 inNamespace:(id)arg2 connectorProperties:(id)arg3 drawingState:(id)arg4;
+ (void)readConnectionFromParent:(struct _xmlNode )arg1 nodeName:(const char )arg2 connection:(id)arg3 drawingState:(id)arg4;

@end

