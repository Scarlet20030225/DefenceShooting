#pragma once

/// <summary>
/// ウィンドウ幅
/// </summary>
constexpr auto WINDOW_WIDTH = 1920;
/// <summary>
/// ウィンドウ高さ
/// </summary>
constexpr auto WINDOW_HEIGHT = 1080;
/// <summary>
/// 色のビット数 
/// </summary>
constexpr auto COLOR_DEPTH = 32;

/// <summary>
/// 基地の耐久値
/// </summary>
constexpr auto ENDURANCE_VALUE = 5;

/// <summary>
/// プレイヤー速度 
/// </summary>
constexpr auto PLAYER_SPEED = 1000.0f;
/// <summary>
/// プレイヤーライフ 
/// </summary>
constexpr auto PLAYER_LIFE = 3;

/// <summary>
/// ボス速度
/// </summary>
constexpr auto BOSS_SPEED = 3.0f;
/// <summary>
/// ボス体力
/// </summary>
constexpr auto BOSS_LIFE = 150;

/// <summary>
/// 雑魚敵1速度
/// </summary>
constexpr auto ENEMY1_SPEED = 7.0f;
/// <summary>
/// 雑魚敵1体力
/// </summary>
constexpr auto ENEMY1_LIFE = 5;

/// <summary>
/// 雑魚敵2速度
/// </summary>
constexpr auto ENEMY2_SPEED = 10.0f;
/// <summary>
/// 雑魚敵2体力
/// </summary>
constexpr auto ENEMY2_LIFE = 7;

/// <summary>
/// 雑魚敵3速度
/// </summary>
constexpr auto ENEMY3_SPEED = 3.0f;
/// <summary>
/// 雑魚敵3体力
/// </summary>
constexpr auto ENEMY3_LIFE = 15;

/// <summary>
/// 雑魚敵4速度
/// </summary>
constexpr auto ENEMY4_SPEED = 5.0f;
/// <summary>
/// 雑魚敵4体力
/// </summary>
constexpr auto ENEMY4_LIFE = 3;

/// <summary>
/// 画面上に存在できる弾の数 
/// </summary>								
constexpr auto SHOT_NUM = 30;
/// <summary>
/// 弾の速度(弾がRapidの時)
/// </summary>
constexpr auto SHOT_SPEED1 = 45.0f;
/// <summary>
/// 弾の速度(弾がPenetrateの時)
/// </summary>
constexpr auto SHOT_SPEED2 = 55.0f;
/// <summary>
/// 弾の速度(弾がMissileの時)
/// </summary>
constexpr auto SHOT_SPEED3 = 35.0f;
/// <summary>
/// 弾の発射間隔(弾がRapidの時) 
/// </summary>
constexpr auto SHOT_INTERVAL1 = 3;
/// <summary>
/// 弾の発射間隔(弾がPenetrateの時) 
/// </summary>
constexpr auto SHOT_INTERVAL2 = 15;
/// <summary>
/// 弾の発射間隔(弾がMissileの時) 
/// </summary>
constexpr auto SHOT_INTERVAL3 = 30;

/// <summary>
/// 背景のスクロール速度1
/// </summary>
constexpr auto SCROLL_SPEED1 = 3.0f;
/// <summary>
/// 背景のスクロール速度2
/// </summary>
constexpr auto SCROLL_SPEED2 = 2.0f;
/// <summary>
/// 背景のスクロール速度3
/// </summary>
constexpr auto SCROLL_SPEED3 = 1.0f;