//
//  DMNLibrary.m
//  Libraries
//
//  Created by Nicholas Ellis on 1/17/17.
//  Copyright © 2017 Nicholas Ellis. All rights reserved.
//

#import "DMNLibrary.h"

@implementation DMNLibrary

- (instancetype)initWithName:(NSString *)name andSummary:(NSString *)summary andLanguage:(NSString *)language andHomepageURL:(NSURL *)homepageURL andNumberOfStars:(NSInteger *)numberOfStars {
    
    if (self) {
        self.name = name;
        self.summary = summary;
        self.language = language;
        self.homepageURL = homepageURL;
        self.numberOfStars = numberOfStars;
    }
    return self;
}

@end
