/*
 * SfMParser.h
 *
 *  Created on: 16 mar 2016
 *      Author: andrea
 */

#ifndef CAM_PARSERS_SFMPARSER_H_
#define CAM_PARSERS_SFMPARSER_H_

#include <glm/glm.hpp>

#include <manifoldReconstructor/types_reconstructor.hpp>

struct SfMData {

  int numPoints_;
  int numCameras_;

  std::vector<glm::vec3> points_;                           // list of 3D points
  std::vector<CameraType> camerasList_;                     // list of cameras
  std::vector<std::string> camerasPaths_;                   // list of camera's path

  std::vector<std::vector<int> > camViewingPointN_;         // each list contains the index of camera that see that point
  std::vector<std::vector<int> > pointsVisibleFromCamN_;    // each list contains the index of points that are seen from that cam
  std::vector<std::vector<glm::vec2> > point2DoncamViewingPoint_;   // a list for each 3D point, each one contains the 2D observations

    std::vector<std::vector<glm::vec2> > camViewing2DPoint_;   // a list for each cam, each one contains the 2D observations

  int imageWidth_, imageHeight_;
};

#endif /* CAM_PARSERS_SFMPARSER_H_ */
