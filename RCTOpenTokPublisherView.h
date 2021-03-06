/**
 * Copyright (c) 2015-present, Callstack Sp z o.o.
 * All rights reserved.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

@import UIKit;
#import "RCTEventDispatcher.h"
#import "RCTComponent.h"

@interface RCTOpenTokPublisherView : UIView

@property (nonatomic, strong) NSString *apiKey;
@property (nonatomic, strong) NSString *sessionId;
@property (nonatomic, strong) NSString *token;
@property (nonatomic, assign) NSInteger cameraResolution;
@property (nonatomic, assign) NSInteger cameraFrameRate;
@property (nonatomic, assign) BOOL videoEnabled;

- (void)pausePublish;
- (void)resumePublish;
- (void)stopPublish;

@property (nonatomic, copy) RCTDirectEventBlock onPublishError;
@property (nonatomic, copy) RCTDirectEventBlock onPublishStop;
@property (nonatomic, copy) RCTDirectEventBlock onPublishStart;

@property (nonatomic, copy) RCTDirectEventBlock onClientConnected;
@property (nonatomic, copy) RCTDirectEventBlock onClientDisconnected;

@property (nonatomic, copy) RCTDirectEventBlock onSessionDidConnect;
@property (nonatomic, copy) RCTDirectEventBlock onSessionDidDisconnect;

@property (nonatomic, copy) RCTDirectEventBlock onArchiveStarted;
@property (nonatomic, copy) RCTDirectEventBlock onArchiveStopped;
@property (nonatomic, copy) RCTDirectEventBlock onThumbnailReady;


@end
