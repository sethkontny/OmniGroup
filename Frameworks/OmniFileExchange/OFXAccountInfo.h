// Copyright 2013 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <Foundation/NSObject.h>

@class OFXAccountClientParameters, OFXConnection;
@class ODAVFileInfo;

@interface OFXAccountInfo : NSObject

- initWithLocalAccountInfoCache:(NSURL *)localAccountInfoCacheURL remoteAccountURL:(NSURL *)remoteAccountURL temporaryDirectoryURL:(NSURL *)temporaryDirectoryURL clientParameters:(OFXAccountClientParameters *)clientParameters error:(NSError **)outError;

@property(nonatomic,readonly) NSURL *remoteAccountURL;

- (BOOL)updateWithConnection:(OFXConnection *)connection accountFileInfo:(ODAVFileInfo *)accountFileInfo clientFileInfos:(NSArray *)clientFileInfos serverDate:(NSDate *)serverDate error:(NSError **)outError;

@property(nonatomic,readonly) NSString *groupIdentifier;

@end

OB_HIDDEN extern NSString * const OFXInfoFileName;
OB_HIDDEN extern NSString * const OFXClientPathExtension;

OB_HIDDEN extern NSString * const OFXAccountInfo_Group;
