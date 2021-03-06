/* Copyright 2018 CNRS-UM LIRMM
 *
 * \author Stéphane Caron
 *
 * This file is part of capture_walking_controller.
 *
 * capture_walking_controller is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the License,
 * or (at your option) any later version.
 *
 * capture_walking_controller is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser
 * General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with capture_walking_controller. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <Eigen/Dense>

namespace capture_walking
{
  namespace world
  {
    constexpr double GRAVITY = 9.80665; // ISO 80000-3

    const Eigen::Vector3d e_z = Eigen::Vector3d{0., 0., 1.};
    const Eigen::Vector3d gravity = Eigen::Vector3d{0., 0., -GRAVITY};
  }

  const Eigen::Vector3d e_z = {0., 0., 1.};
}
