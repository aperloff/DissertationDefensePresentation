{
//=========Macro generated from canvas: c/the canvas
//=========  (Fri Jul 17 17:28:50 2015) by ROOT version5.32/00
   TCanvas *c = new TCanvas("c", "the canvas",0,0,650,500);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-0.1410926,-0.1692308,1.165321,1.241026);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetRightMargin(0.05);
   c->SetBottomMargin(0.12);
   c->SetFrameFillColor(0);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(1000);
   graph->SetName("rocBDT");
   graph->SetTitle("Background rejection versus Signal efficiency");
   graph->SetFillColor(1);
   graph->SetLineColor(34);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0.3);
   graph->SetPoint(0,1,0);
   graph->SetPoint(1,1,0);
   graph->SetPoint(2,1,0);
   graph->SetPoint(3,1,0);
   graph->SetPoint(4,1,0);
   graph->SetPoint(5,1,0);
   graph->SetPoint(6,1,0);
   graph->SetPoint(7,1,0);
   graph->SetPoint(8,1,0);
   graph->SetPoint(9,1,0);
   graph->SetPoint(10,1,0);
   graph->SetPoint(11,1,0);
   graph->SetPoint(12,1,0);
   graph->SetPoint(13,1,0);
   graph->SetPoint(14,1,0);
   graph->SetPoint(15,1,0);
   graph->SetPoint(16,1,0);
   graph->SetPoint(17,1,0);
   graph->SetPoint(18,1,0);
   graph->SetPoint(19,1,0);
   graph->SetPoint(20,1,0);
   graph->SetPoint(21,1,0);
   graph->SetPoint(22,1,0);
   graph->SetPoint(23,1,0);
   graph->SetPoint(24,1,0);
   graph->SetPoint(25,1,0);
   graph->SetPoint(26,1,0);
   graph->SetPoint(27,1,0);
   graph->SetPoint(28,1,0);
   graph->SetPoint(29,1,0);
   graph->SetPoint(30,1,0);
   graph->SetPoint(31,1,0);
   graph->SetPoint(32,1,0);
   graph->SetPoint(33,1,0);
   graph->SetPoint(34,1,0);
   graph->SetPoint(35,1,0);
   graph->SetPoint(36,1,0);
   graph->SetPoint(37,1,0);
   graph->SetPoint(38,1,0);
   graph->SetPoint(39,1,0);
   graph->SetPoint(40,1,0);
   graph->SetPoint(41,1,0);
   graph->SetPoint(42,1,0);
   graph->SetPoint(43,1,0);
   graph->SetPoint(44,1,0);
   graph->SetPoint(45,1,0);
   graph->SetPoint(46,1,0);
   graph->SetPoint(47,1,0);
   graph->SetPoint(48,1,0);
   graph->SetPoint(49,1,0);
   graph->SetPoint(50,1,0);
   graph->SetPoint(51,1,0);
   graph->SetPoint(52,1,0);
   graph->SetPoint(53,1,0);
   graph->SetPoint(54,1,0);
   graph->SetPoint(55,1,0);
   graph->SetPoint(56,1,0);
   graph->SetPoint(57,1,0);
   graph->SetPoint(58,1,0);
   graph->SetPoint(59,1,0);
   graph->SetPoint(60,1,0);
   graph->SetPoint(61,1,0);
   graph->SetPoint(62,1,0);
   graph->SetPoint(63,1,0);
   graph->SetPoint(64,1,0);
   graph->SetPoint(65,1,0);
   graph->SetPoint(66,1,0);
   graph->SetPoint(67,1,0);
   graph->SetPoint(68,1,0);
   graph->SetPoint(69,1,0);
   graph->SetPoint(70,1,0);
   graph->SetPoint(71,1,0);
   graph->SetPoint(72,1,0);
   graph->SetPoint(73,1,0);
   graph->SetPoint(74,1,0);
   graph->SetPoint(75,1,0);
   graph->SetPoint(76,1,0);
   graph->SetPoint(77,1,0);
   graph->SetPoint(78,1,0);
   graph->SetPoint(79,1,0);
   graph->SetPoint(80,1,0);
   graph->SetPoint(81,1,0);
   graph->SetPoint(82,1,0);
   graph->SetPoint(83,1,0);
   graph->SetPoint(84,1,0);
   graph->SetPoint(85,1,0);
   graph->SetPoint(86,1,0);
   graph->SetPoint(87,1,0);
   graph->SetPoint(88,1,0);
   graph->SetPoint(89,1,0);
   graph->SetPoint(90,1,0);
   graph->SetPoint(91,1,0);
   graph->SetPoint(92,1,0);
   graph->SetPoint(93,1,0);
   graph->SetPoint(94,1,0);
   graph->SetPoint(95,1,0);
   graph->SetPoint(96,1,0);
   graph->SetPoint(97,1,0);
   graph->SetPoint(98,1,0);
   graph->SetPoint(99,1,0);
   graph->SetPoint(100,1,0);
   graph->SetPoint(101,1,0);
   graph->SetPoint(102,1,0);
   graph->SetPoint(103,1,0);
   graph->SetPoint(104,1,0);
   graph->SetPoint(105,1,0);
   graph->SetPoint(106,1,0);
   graph->SetPoint(107,1,0);
   graph->SetPoint(108,1,0);
   graph->SetPoint(109,1,0);
   graph->SetPoint(110,1,0);
   graph->SetPoint(111,1,0);
   graph->SetPoint(112,1,0);
   graph->SetPoint(113,1,0);
   graph->SetPoint(114,1,0);
   graph->SetPoint(115,1,0);
   graph->SetPoint(116,1,0);
   graph->SetPoint(117,1,0);
   graph->SetPoint(118,1,0);
   graph->SetPoint(119,1,0);
   graph->SetPoint(120,1,0);
   graph->SetPoint(121,1,0);
   graph->SetPoint(122,1,0);
   graph->SetPoint(123,1,0);
   graph->SetPoint(124,1,0);
   graph->SetPoint(125,1,0);
   graph->SetPoint(126,1,0);
   graph->SetPoint(127,1,0);
   graph->SetPoint(128,1,0);
   graph->SetPoint(129,1,0);
   graph->SetPoint(130,1,0);
   graph->SetPoint(131,1,0);
   graph->SetPoint(132,1,0);
   graph->SetPoint(133,1,0);
   graph->SetPoint(134,1,0);
   graph->SetPoint(135,1,0);
   graph->SetPoint(136,1,0);
   graph->SetPoint(137,1,0);
   graph->SetPoint(138,1,0);
   graph->SetPoint(139,1,0);
   graph->SetPoint(140,1,0);
   graph->SetPoint(141,1,0);
   graph->SetPoint(142,1,0);
   graph->SetPoint(143,1,0);
   graph->SetPoint(144,1,0);
   graph->SetPoint(145,1,0);
   graph->SetPoint(146,1,0);
   graph->SetPoint(147,1,0);
   graph->SetPoint(148,1,0);
   graph->SetPoint(149,1,0);
   graph->SetPoint(150,1,0);
   graph->SetPoint(151,1,0);
   graph->SetPoint(152,1,0);
   graph->SetPoint(153,1,0);
   graph->SetPoint(154,1,0);
   graph->SetPoint(155,1,0);
   graph->SetPoint(156,1,0);
   graph->SetPoint(157,1,0);
   graph->SetPoint(158,1,0);
   graph->SetPoint(159,1,0);
   graph->SetPoint(160,1,0);
   graph->SetPoint(161,1,0);
   graph->SetPoint(162,1,0);
   graph->SetPoint(163,1,0);
   graph->SetPoint(164,1,0);
   graph->SetPoint(165,1,0);
   graph->SetPoint(166,1,0);
   graph->SetPoint(167,1,0);
   graph->SetPoint(168,1,0);
   graph->SetPoint(169,1,0);
   graph->SetPoint(170,1,0);
   graph->SetPoint(171,1,0);
   graph->SetPoint(172,1,0);
   graph->SetPoint(173,1,0);
   graph->SetPoint(174,1,0);
   graph->SetPoint(175,1,0);
   graph->SetPoint(176,1,0);
   graph->SetPoint(177,1,0);
   graph->SetPoint(178,1,0);
   graph->SetPoint(179,1,0);
   graph->SetPoint(180,1,0);
   graph->SetPoint(181,1,0);
   graph->SetPoint(182,1,0);
   graph->SetPoint(183,1,0);
   graph->SetPoint(184,1,0);
   graph->SetPoint(185,1,0);
   graph->SetPoint(186,1,0);
   graph->SetPoint(187,1,0);
   graph->SetPoint(188,1,0);
   graph->SetPoint(189,1,0);
   graph->SetPoint(190,1,0);
   graph->SetPoint(191,1,0);
   graph->SetPoint(192,1,0);
   graph->SetPoint(193,1,0);
   graph->SetPoint(194,1,0);
   graph->SetPoint(195,1,0);
   graph->SetPoint(196,1,0);
   graph->SetPoint(197,1,0);
   graph->SetPoint(198,1,0);
   graph->SetPoint(199,1,0);
   graph->SetPoint(200,1,0);
   graph->SetPoint(201,1,0);
   graph->SetPoint(202,1,0);
   graph->SetPoint(203,1,0);
   graph->SetPoint(204,1,0);
   graph->SetPoint(205,1,0);
   graph->SetPoint(206,1,0);
   graph->SetPoint(207,1,0);
   graph->SetPoint(208,1,0);
   graph->SetPoint(209,1,0);
   graph->SetPoint(210,1,0);
   graph->SetPoint(211,1,0);
   graph->SetPoint(212,1,0);
   graph->SetPoint(213,1,0);
   graph->SetPoint(214,1,0);
   graph->SetPoint(215,1,0);
   graph->SetPoint(216,1,0);
   graph->SetPoint(217,1,0);
   graph->SetPoint(218,1,0);
   graph->SetPoint(219,1,0);
   graph->SetPoint(220,1,0);
   graph->SetPoint(221,1,0);
   graph->SetPoint(222,1,0);
   graph->SetPoint(223,1,0);
   graph->SetPoint(224,1,0);
   graph->SetPoint(225,1,0);
   graph->SetPoint(226,1,0);
   graph->SetPoint(227,1,0);
   graph->SetPoint(228,1,0);
   graph->SetPoint(229,1,0);
   graph->SetPoint(230,1,0);
   graph->SetPoint(231,1,0);
   graph->SetPoint(232,1,0);
   graph->SetPoint(233,1,0);
   graph->SetPoint(234,1,0);
   graph->SetPoint(235,1,0);
   graph->SetPoint(236,1,0);
   graph->SetPoint(237,1,0);
   graph->SetPoint(238,1,0);
   graph->SetPoint(239,1,0);
   graph->SetPoint(240,1,0);
   graph->SetPoint(241,1,0);
   graph->SetPoint(242,1,0);
   graph->SetPoint(243,1,0);
   graph->SetPoint(244,1,0);
   graph->SetPoint(245,1,0);
   graph->SetPoint(246,1,0);
   graph->SetPoint(247,1,0);
   graph->SetPoint(248,1,0);
   graph->SetPoint(249,1,0);
   graph->SetPoint(250,1,0);
   graph->SetPoint(251,1,0);
   graph->SetPoint(252,1,0);
   graph->SetPoint(253,1,0);
   graph->SetPoint(254,1,0);
   graph->SetPoint(255,1,0);
   graph->SetPoint(256,1,0);
   graph->SetPoint(257,1,0);
   graph->SetPoint(258,1,0);
   graph->SetPoint(259,1,0);
   graph->SetPoint(260,1,0);
   graph->SetPoint(261,1,0);
   graph->SetPoint(262,1,0);
   graph->SetPoint(263,1,0);
   graph->SetPoint(264,1,0);
   graph->SetPoint(265,1,0);
   graph->SetPoint(266,1,0);
   graph->SetPoint(267,1,0);
   graph->SetPoint(268,1,0);
   graph->SetPoint(269,1,0);
   graph->SetPoint(270,1,0);
   graph->SetPoint(271,1,0);
   graph->SetPoint(272,1,0);
   graph->SetPoint(273,1,0);
   graph->SetPoint(274,1,0);
   graph->SetPoint(275,1,0);
   graph->SetPoint(276,1,0);
   graph->SetPoint(277,1,0);
   graph->SetPoint(278,1,0);
   graph->SetPoint(279,1,0);
   graph->SetPoint(280,1,0);
   graph->SetPoint(281,1,0);
   graph->SetPoint(282,1,0);
   graph->SetPoint(283,1,0);
   graph->SetPoint(284,1,0);
   graph->SetPoint(285,1,0);
   graph->SetPoint(286,1,0);
   graph->SetPoint(287,1,0);
   graph->SetPoint(288,1,0);
   graph->SetPoint(289,1,0);
   graph->SetPoint(290,1,0);
   graph->SetPoint(291,1,0);
   graph->SetPoint(292,1,0);
   graph->SetPoint(293,1,0);
   graph->SetPoint(294,1,0);
   graph->SetPoint(295,1,0);
   graph->SetPoint(296,1,0);
   graph->SetPoint(297,1,0);
   graph->SetPoint(298,1,0);
   graph->SetPoint(299,1,0);
   graph->SetPoint(300,1,0);
   graph->SetPoint(301,1,4.937296399e-05);
   graph->SetPoint(302,1,4.937296399e-05);
   graph->SetPoint(303,1,4.937296399e-05);
   graph->SetPoint(304,1,4.937296399e-05);
   graph->SetPoint(305,1,4.937296399e-05);
   graph->SetPoint(306,1,4.937296399e-05);
   graph->SetPoint(307,1,4.937296399e-05);
   graph->SetPoint(308,1,4.937296399e-05);
   graph->SetPoint(309,1,4.937296399e-05);
   graph->SetPoint(310,1,4.937296399e-05);
   graph->SetPoint(311,1,4.937296399e-05);
   graph->SetPoint(312,1,4.937296399e-05);
   graph->SetPoint(313,1,4.937296399e-05);
   graph->SetPoint(314,1,4.937296399e-05);
   graph->SetPoint(315,1,4.937296399e-05);
   graph->SetPoint(316,1,4.937296399e-05);
   graph->SetPoint(317,1,4.937296399e-05);
   graph->SetPoint(318,1,4.937296399e-05);
   graph->SetPoint(319,1,4.937296399e-05);
   graph->SetPoint(320,1,9.874592797e-05);
   graph->SetPoint(321,1,9.874592797e-05);
   graph->SetPoint(322,1,0.0001481188956);
   graph->SetPoint(323,1,0.0001974918559);
   graph->SetPoint(324,1,0.0001974918559);
   graph->SetPoint(325,1,0.0001974918559);
   graph->SetPoint(326,1,0.0001974918559);
   graph->SetPoint(327,1,0.0002468648308);
   graph->SetPoint(328,1,0.0002468648308);
   graph->SetPoint(329,1,0.0002962377912);
   graph->SetPoint(330,1,0.0002962377912);
   graph->SetPoint(331,1,0.0003456107515);
   graph->SetPoint(332,0.9999579787,0.0003456107515);
   graph->SetPoint(333,0.9999579787,0.0003949837119);
   graph->SetPoint(334,0.9999579787,0.0003949837119);
   graph->SetPoint(335,0.9999579787,0.0003949837119);
   graph->SetPoint(336,0.9999579787,0.0003949837119);
   graph->SetPoint(337,0.9999579787,0.0004937296617);
   graph->SetPoint(338,0.9999579787,0.000543102622);
   graph->SetPoint(339,0.9999159575,0.000543102622);
   graph->SetPoint(340,0.9999159575,0.0005924755824);
   graph->SetPoint(341,0.9999159575,0.0006418485427);
   graph->SetPoint(342,0.9999159575,0.0006418485427);
   graph->SetPoint(343,0.9999159575,0.0006912215031);
   graph->SetPoint(344,0.9999159575,0.0006912215031);
   graph->SetPoint(345,0.9999159575,0.0007405944634);
   graph->SetPoint(346,0.9999159575,0.0007899674238);
   graph->SetPoint(347,0.9999159575,0.0008393403841);
   graph->SetPoint(348,0.9999159575,0.0008887133445);
   graph->SetPoint(349,0.9999159575,0.001036832226);
   graph->SetPoint(350,0.9998319149,0.001826799591);
   graph->SetPoint(351,0.9998319149,0.002024291549);
   graph->SetPoint(352,0.9998319149,0.002024291549);
   graph->SetPoint(353,0.9998319149,0.002123037353);
   graph->SetPoint(354,0.9998319149,0.002172410488);
   graph->SetPoint(355,0.9998319149,0.00222178339);
   graph->SetPoint(356,0.9997478724,0.002320529195);
   graph->SetPoint(357,0.9997478724,0.002468648134);
   graph->SetPoint(358,0.9997478724,0.002567394171);
   graph->SetPoint(359,0.9997478724,0.002715512877);
   graph->SetPoint(360,0.9997478724,0.002764886012);
   graph->SetPoint(361,0.9997478724,0.003061123658);
   graph->SetPoint(362,0.9997478724,0.003209242597);
   graph->SetPoint(363,0.9997478724,0.003456107341);
   graph->SetPoint(364,0.9997478724,0.00360422628);
   graph->SetPoint(365,0.9997478724,0.003702972317);
   graph->SetPoint(366,0.9996638894,0.004246074706);
   graph->SetPoint(367,0.9995798469,0.004542312585);
   graph->SetPoint(368,0.9995378256,0.004690431524);
   graph->SetPoint(369,0.9995378256,0.004838550463);
   graph->SetPoint(370,0.9995378256,0.004937296268);
   graph->SetPoint(371,0.9995378256,0.005085415207);
   graph->SetPoint(372,0.9995378256,0.005431025755);
   graph->SetPoint(373,0.9994117618,0.006023501512);
   graph->SetPoint(374,0.9993697405,0.006220993586);
   graph->SetPoint(375,0.9993277192,0.006467858329);
   graph->SetPoint(376,0.9993277192,0.006862842012);
   graph->SetPoint(377,0.9992856979,0.007109706756);
   graph->SetPoint(378,0.9992016554,0.007257825695);
   graph->SetPoint(379,0.9991176724,0.007603436243);
   graph->SetPoint(380,0.9990336299,0.008047793061);
   graph->SetPoint(381,0.9989916086,0.008294657804);
   graph->SetPoint(382,0.9988655448,0.008739014156);
   graph->SetPoint(383,0.9988235235,0.009133998305);
   graph->SetPoint(384,0.9988235235,0.009479609318);
   graph->SetPoint(385,0.9987815022,0.0098252194);
   graph->SetPoint(386,0.998739481,0.01017083041);
   graph->SetPoint(387,0.9986134171,0.01056581456);
   graph->SetPoint(388,0.9984453917,0.01145452727);
   graph->SetPoint(389,0.9983613491,0.01194825675);
   graph->SetPoint(390,0.9982773066,0.01268885192);
   graph->SetPoint(391,0.9980672002,0.01362693775);
   graph->SetPoint(392,0.9980672002,0.01421941351);
   graph->SetPoint(393,0.9978571534,0.01451565139);
   graph->SetPoint(394,0.9978571534,0.01525624562);
   graph->SetPoint(395,0.9977731109,0.01604621299);
   graph->SetPoint(396,0.997647047,0.0164411962);
   graph->SetPoint(397,0.9974370003,0.01742865518);
   graph->SetPoint(398,0.9971008301,0.01826799661);
   graph->SetPoint(399,0.9970167875,0.0189098455);
   graph->SetPoint(400,0.996848762,0.02024291456);
   graph->SetPoint(401,0.9967226982,0.02088476345);
   graph->SetPoint(402,0.9965125918,0.02187222242);
   graph->SetPoint(403,0.9965125918,0.02251407132);
   graph->SetPoint(404,0.9961764812,0.02345215715);
   graph->SetPoint(405,0.9960504174,0.02443961613);
   graph->SetPoint(406,0.9957982898,0.02572331391);
   graph->SetPoint(407,0.9955462217,0.02720450237);
   graph->SetPoint(408,0.9954201579,0.02804384381);
   graph->SetPoint(409,0.9952520728,0.02903130278);
   graph->SetPoint(410,0.9950840473,0.03011750802);
   graph->SetPoint(411,0.9946638942,0.03140120581);
   graph->SetPoint(412,0.9943697453,0.03278364614);
   graph->SetPoint(413,0.9938655496,0.03431420773);
   graph->SetPoint(414,0.9933193326,0.0359928906);
   graph->SetPoint(415,0.9927731156,0.03752345219);
   graph->SetPoint(416,0.992520988,0.0393008776);
   graph->SetPoint(417,0.9921848774,0.04088081419);
   graph->SetPoint(418,0.9918487668,0.04231262952);
   graph->SetPoint(419,0.9915546179,0.04384319112);
   graph->SetPoint(420,0.9912605286,0.04586748406);
   graph->SetPoint(421,0.9909243584,0.04769428447);
   graph->SetPoint(422,0.990462184,0.05006418377);
   graph->SetPoint(423,0.989915967,0.05238471553);
   graph->SetPoint(424,0.9894117713,0.05371778458);
   graph->SetPoint(425,0.9888235331,0.0557420738);
   graph->SetPoint(426,0.9883193374,0.05791448429);
   graph->SetPoint(427,0.9875209928,0.06033376232);
   graph->SetPoint(428,0.9869327545,0.06235805154);
   graph->SetPoint(429,0.9863865376,0.06472795457);
   graph->SetPoint(430,0.9856722951,0.06759158522);
   graph->SetPoint(431,0.9852100611,0.07015898079);
   graph->SetPoint(432,0.9846218228,0.07223264873);
   graph->SetPoint(433,0.9838235378,0.07494816184);
   graph->SetPoint(434,0.9829831719,0.07716993988);
   graph->SetPoint(435,0.9819327593,0.07934235036);
   graph->SetPoint(436,0.9812185168,0.08200848848);
   graph->SetPoint(437,0.9805042148,0.08506961912);
   graph->SetPoint(438,0.979831934,0.08788387477);
   graph->SetPoint(439,0.9786554575,0.09064876288);
   graph->SetPoint(440,0.977478981,0.09336427599);
   graph->SetPoint(441,0.9766386747,0.09598103911);
   graph->SetPoint(442,0.9757562876,0.09923965484);
   graph->SetPoint(443,0.9745798111,0.1021526605);
   graph->SetPoint(444,0.9736554623,0.1062012464);
   graph->SetPoint(445,0.9725210071,0.1094598621);
   graph->SetPoint(446,0.9713445306,0.113360323);
   graph->SetPoint(447,0.9701680541,0.1163720712);
   graph->SetPoint(448,0.9686974883,0.1194332018);
   graph->SetPoint(449,0.9673109055,0.1231361702);
   graph->SetPoint(450,0.9660084248,0.1270366311);
   graph->SetPoint(451,0.9642016888,0.1314802021);
   graph->SetPoint(452,0.9628151059,0.1352819204);
   graph->SetPoint(453,0.9616386294,0.1389848888);
   graph->SetPoint(454,0.9599159956,0.1437740624);
   graph->SetPoint(455,0.9582772851,0.1480695158);
   graph->SetPoint(456,0.956764698,0.1523649693);
   graph->SetPoint(457,0.9549159408,0.1567591578);
   graph->SetPoint(458,0.9526890516,0.160363391);
   graph->SetPoint(459,0.9505041838,0.1651525646);
   graph->SetPoint(460,0.9484453797,0.1700898558);
   graph->SetPoint(461,0.9462605119,0.1752740145);
   graph->SetPoint(462,0.9442436695,0.1796682179);
   graph->SetPoint(463,0.9424790144,0.1843586415);
   graph->SetPoint(464,0.9399579763,0.1899871677);
   graph->SetPoint(465,0.9373949766,0.1947763413);
   graph->SetPoint(466,0.9354201555,0.2004048526);
   graph->SetPoint(467,0.9326890707,0.2058358788);
   graph->SetPoint(468,0.9302940965,0.2109213024);
   graph->SetPoint(469,0.9276470542,0.2163523287);
   graph->SetPoint(470,0.9250000119,0.22207959);
   graph->SetPoint(471,0.9218066931,0.2279549688);
   graph->SetPoint(472,0.9195798039,0.233484745);
   graph->SetPoint(473,0.9166806936,0.2390638888);
   graph->SetPoint(474,0.9134033322,0.2455317527);
   graph->SetPoint(475,0.9089915752,0.2525427043);
   graph->SetPoint(476,0.9054201841,0.2588624358);
   graph->SetPoint(477,0.9018907547,0.2645403445);
   graph->SetPoint(478,0.8984873891,0.2711069286);
   graph->SetPoint(479,0.893907547,0.2781672776);
   graph->SetPoint(480,0.8895798326,0.2859188318);
   graph->SetPoint(481,0.8860504031,0.2933247685);
   graph->SetPoint(482,0.8817226887,0.3019650578);
   graph->SetPoint(483,0.8764705658,0.3084822893);
   graph->SetPoint(484,0.8718067408,0.3155426085);
   graph->SetPoint(485,0.8660924435,0.3233435452);
   graph->SetPoint(486,0.8604201674,0.3313419521);
   graph->SetPoint(487,0.8549159765,0.3397847414);
   graph->SetPoint(488,0.8490756154,0.3486718535);
   graph->SetPoint(489,0.843655467,0.3562259376);
   graph->SetPoint(490,0.8374789953,0.3644712269);
   graph->SetPoint(491,0.8308823705,0.3724696338);
   graph->SetPoint(492,0.8233613372,0.3804186881);
   graph->SetPoint(493,0.8155041933,0.3894045651);
   graph->SetPoint(494,0.8076470494,0.3992297947);
   graph->SetPoint(495,0.8009243608,0.4087587595);
   graph->SetPoint(496,0.7942857146,0.4188802242);
   graph->SetPoint(497,0.7873529196,0.4273229837);
   graph->SetPoint(498,0.7794957757,0.4370000958);
   graph->SetPoint(499,0.7717226744,0.446973443);
   graph->SetPoint(500,0.7633613348,0.4551199675);
   graph->SetPoint(501,0.7544537783,0.4638589919);
   graph->SetPoint(502,0.7455042005,0.4734373391);
   graph->SetPoint(503,0.7366386652,0.4827688336);
   graph->SetPoint(504,0.7286134362,0.4916559756);
   graph->SetPoint(505,0.7197058797,0.5008393526);
   graph->SetPoint(506,0.7107563019,0.5110595226);
   graph->SetPoint(507,0.7015966177,0.5221684575);
   graph->SetPoint(508,0.6920167804,0.5332773924);
   graph->SetPoint(509,0.6826890707,0.5434482098);
   graph->SetPoint(510,0.6734033823,0.5536190271);
   graph->SetPoint(511,0.6639496088,0.5646291971);
   graph->SetPoint(512,0.6529411674,0.5735163689);
   graph->SetPoint(513,0.6423529387,0.5835884213);
   graph->SetPoint(514,0.633025229,0.5934630036);
   graph->SetPoint(515,0.6212605238,0.6063987613);
   graph->SetPoint(516,0.6089075804,0.6167176962);
   graph->SetPoint(517,0.5971008539,0.6287153363);
   graph->SetPoint(518,0.5851680636,0.6399229765);
   graph->SetPoint(519,0.5728571415,0.6508343816);
   graph->SetPoint(520,0.5595798492,0.6633257866);
   graph->SetPoint(521,0.5467647314,0.6733484864);
   graph->SetPoint(522,0.5330672264,0.6847042441);
   graph->SetPoint(523,0.5173109174,0.6989236474);
   graph->SetPoint(524,0.5027731061,0.7123037577);
   graph->SetPoint(525,0.4884873927,0.7227214575);
   graph->SetPoint(526,0.4725210071,0.733484745);
   graph->SetPoint(527,0.4598739445,0.7457292676);
   graph->SetPoint(528,0.4445378184,0.7571837902);
   graph->SetPoint(529,0.4305462241,0.7683914304);
   graph->SetPoint(530,0.4163865447,0.7800928354);
   graph->SetPoint(531,0.4011344612,0.7905105352);
   graph->SetPoint(532,0.3865966499,0.8015700579);
   graph->SetPoint(533,0.3704621792,0.8115927577);
   graph->SetPoint(534,0.3529411852,0.8242322206);
   graph->SetPoint(535,0.3378151357,0.8338106275);
   graph->SetPoint(536,0.3194117546,0.8433395624);
   graph->SetPoint(537,0.3060504198,0.8517823815);
   graph->SetPoint(538,0.2919747829,0.8603239059);
   graph->SetPoint(539,0.2779831886,0.8691616654);
   graph->SetPoint(540,0.2642857134,0.8779500127);
   graph->SetPoint(541,0.2518907487,0.8847141266);
   graph->SetPoint(542,0.2392857075,0.8907870054);
   graph->SetPoint(543,0.227352947,0.8962674141);
   graph->SetPoint(544,0.215462178,0.9017971754);
   graph->SetPoint(545,0.204831928,0.9076725841);
   graph->SetPoint(546,0.1945378184,0.9137948155);
   graph->SetPoint(547,0.1842436939,0.9188308716);
   graph->SetPoint(548,0.1744117588,0.9235706329);
   graph->SetPoint(549,0.1648739427,0.928211689);
   graph->SetPoint(550,0.1561764777,0.9323590398);
   graph->SetPoint(551,0.1482352912,0.9374444485);
   graph->SetPoint(552,0.1393277347,0.9416411519);
   graph->SetPoint(553,0.1315546185,0.9455416203);
   graph->SetPoint(554,0.1235714257,0.9494420886);
   graph->SetPoint(555,0.1175210103,0.9526513219);
   graph->SetPoint(556,0.1116386577,0.9562062025);
   graph->SetPoint(557,0.1059243679,0.9588229656);
   graph->SetPoint(558,0.09915966541,0.9617359638);
   graph->SetPoint(559,0.09277310967,0.9641552567);
   graph->SetPoint(560,0.08760504425,0.9663770199);
   graph->SetPoint(561,0.08218487352,0.9688950181);
   graph->SetPoint(562,0.07756302506,0.9707218409);
   graph->SetPoint(563,0.0727731064,0.9726473689);
   graph->SetPoint(564,0.06932773441,0.9740791917);
   graph->SetPoint(565,0.06441176683,0.9758566022);
   graph->SetPoint(566,0.06033613533,0.9774365425);
   graph->SetPoint(567,0.05718487501,0.9786708951);
   graph->SetPoint(568,0.05382353067,0.9798558354);
   graph->SetPoint(569,0.04945378006,0.9820282459);
   graph->SetPoint(570,0.04684874043,0.9836081862);
   graph->SetPoint(571,0.04348739609,0.9854349494);
   graph->SetPoint(572,0.04021008313,0.9864224195);
   graph->SetPoint(573,0.03722688928,0.987903595);
   graph->SetPoint(574,0.03432773054,0.9891379476);
   graph->SetPoint(575,0.03147058934,0.9902241826);
   graph->SetPoint(576,0.02878151275,0.991310358);
   graph->SetPoint(577,0.02584033646,0.9922978282);
   graph->SetPoint(578,0.02268907614,0.9931371808);
   graph->SetPoint(579,0.02109243721,0.9936308861);
   graph->SetPoint(580,0.0197058823,0.9942233562);
   graph->SetPoint(581,0.01752100885,0.9943221211);
   graph->SetPoint(582,0.01609243639,0.9949145913);
   graph->SetPoint(583,0.01474789903,0.9953589439);
   graph->SetPoint(584,0.01323529426,0.9959020615);
   graph->SetPoint(585,0.01222689077,0.9963464141);
   graph->SetPoint(586,0.01105041988,0.9967414141);
   graph->SetPoint(587,0.01025210042,0.9970870018);
   graph->SetPoint(588,0.00920168031,0.9974820018);
   graph->SetPoint(589,0.008445378393,0.997679472);
   graph->SetPoint(590,0.007857142948,0.9979263544);
   graph->SetPoint(591,0.007268907502,0.998074472);
   graph->SetPoint(592,0.006596638821,0.9983212948);
   graph->SetPoint(593,0.005882353056,0.9987162948);
   graph->SetPoint(594,0.005588235334,0.9989631772);
   graph->SetPoint(595,0.004999999888,0.9990619421);
   graph->SetPoint(596,0.004201680887,0.9990619421);
   graph->SetPoint(597,0.003739495762,0.9992594123);
   graph->SetPoint(598,0.00331932772,0.9993087649);
   graph->SetPoint(599,0.003151260549,0.9995062947);
   graph->SetPoint(600,0.002857142827,0.9997531176);
   graph->SetPoint(601,0.002521008486,0.9998025298);
   graph->SetPoint(602,0.002310924465,0.9998518825);
   graph->SetPoint(603,0.002100840444,0.9998518825);
   graph->SetPoint(604,0.001848739455,0.9999012351);
   graph->SetPoint(605,0.00176470587,0.9999012351);
   graph->SetPoint(606,0.001554621849,0.9999012351);
   graph->SetPoint(607,0.001470588264,0.9999506474);
   graph->SetPoint(608,0.001344537828,0.9999506474);
   graph->SetPoint(609,0.001218487392,0.9999506474);
   graph->SetPoint(610,0.001092436956,0.9999506474);
   graph->SetPoint(611,0.0009243697277,0.9999506474);
   graph->SetPoint(612,0.0008403361426,0.9999506474);
   graph->SetPoint(613,0.0007142857066,0.9999506474);
   graph->SetPoint(614,0.0005882352707,0.9999506474);
   graph->SetPoint(615,0.0003781512496,0.9999506474);
   graph->SetPoint(616,0.0003781512496,0.9999506474);
   graph->SetPoint(617,0.000336134457,0.9999506474);
   graph->SetPoint(618,0.0002941176353,0.9999506474);
   graph->SetPoint(619,0.0002521008428,0.9999506474);
   graph->SetPoint(620,0.0002521008428,0.9999506474);
   graph->SetPoint(621,0.0002100840356,1);
   graph->SetPoint(622,0.0002100840356,1);
   graph->SetPoint(623,0.0002100840356,1);
   graph->SetPoint(624,0.0002100840356,1);
   graph->SetPoint(625,0.0002100840356,1);
   graph->SetPoint(626,0.0002100840356,1);
   graph->SetPoint(627,0.0001680672285,1);
   graph->SetPoint(628,8.403361426e-05,1);
   graph->SetPoint(629,8.403361426e-05,1);
   graph->SetPoint(630,8.403361426e-05,1);
   graph->SetPoint(631,4.201680713e-05,1);
   graph->SetPoint(632,4.201680713e-05,1);
   graph->SetPoint(633,4.201680713e-05,1);
   graph->SetPoint(634,4.201680713e-05,1);
   graph->SetPoint(635,4.201680713e-05,1);
   graph->SetPoint(636,4.201680713e-05,1);
   graph->SetPoint(637,4.201680713e-05,1);
   graph->SetPoint(638,4.201680713e-05,1);
   graph->SetPoint(639,4.201680713e-05,1);
   graph->SetPoint(640,4.201680713e-05,1);
   graph->SetPoint(641,4.201680713e-05,1);
   graph->SetPoint(642,4.201680713e-05,1);
   graph->SetPoint(643,0,1);
   graph->SetPoint(644,0,1);
   graph->SetPoint(645,0,1);
   graph->SetPoint(646,0,1);
   graph->SetPoint(647,0,1);
   graph->SetPoint(648,0,1);
   graph->SetPoint(649,0,1);
   graph->SetPoint(650,0,1);
   graph->SetPoint(651,0,1);
   graph->SetPoint(652,0,1);
   graph->SetPoint(653,0,1);
   graph->SetPoint(654,0,1);
   graph->SetPoint(655,0,1);
   graph->SetPoint(656,0,1);
   graph->SetPoint(657,0,1);
   graph->SetPoint(658,0,1);
   graph->SetPoint(659,0,1);
   graph->SetPoint(660,0,1);
   graph->SetPoint(661,0,1);
   graph->SetPoint(662,0,1);
   graph->SetPoint(663,0,1);
   graph->SetPoint(664,0,1);
   graph->SetPoint(665,0,1);
   graph->SetPoint(666,0,1);
   graph->SetPoint(667,0,1);
   graph->SetPoint(668,0,1);
   graph->SetPoint(669,0,1);
   graph->SetPoint(670,0,1);
   graph->SetPoint(671,0,1);
   graph->SetPoint(672,0,1);
   graph->SetPoint(673,0,1);
   graph->SetPoint(674,0,1);
   graph->SetPoint(675,0,1);
   graph->SetPoint(676,0,1);
   graph->SetPoint(677,0,1);
   graph->SetPoint(678,0,1);
   graph->SetPoint(679,0,1);
   graph->SetPoint(680,0,1);
   graph->SetPoint(681,0,1);
   graph->SetPoint(682,0,1);
   graph->SetPoint(683,0,1);
   graph->SetPoint(684,0,1);
   graph->SetPoint(685,0,1);
   graph->SetPoint(686,0,1);
   graph->SetPoint(687,0,1);
   graph->SetPoint(688,0,1);
   graph->SetPoint(689,0,1);
   graph->SetPoint(690,0,1);
   graph->SetPoint(691,0,1);
   graph->SetPoint(692,0,1);
   graph->SetPoint(693,0,1);
   graph->SetPoint(694,0,1);
   graph->SetPoint(695,0,1);
   graph->SetPoint(696,0,1);
   graph->SetPoint(697,0,1);
   graph->SetPoint(698,0,1);
   graph->SetPoint(699,0,1);
   graph->SetPoint(700,0,1);
   graph->SetPoint(701,0,1);
   graph->SetPoint(702,0,1);
   graph->SetPoint(703,0,1);
   graph->SetPoint(704,0,1);
   graph->SetPoint(705,0,1);
   graph->SetPoint(706,0,1);
   graph->SetPoint(707,0,1);
   graph->SetPoint(708,0,1);
   graph->SetPoint(709,0,1);
   graph->SetPoint(710,0,1);
   graph->SetPoint(711,0,1);
   graph->SetPoint(712,0,1);
   graph->SetPoint(713,0,1);
   graph->SetPoint(714,0,1);
   graph->SetPoint(715,0,1);
   graph->SetPoint(716,0,1);
   graph->SetPoint(717,0,1);
   graph->SetPoint(718,0,1);
   graph->SetPoint(719,0,1);
   graph->SetPoint(720,0,1);
   graph->SetPoint(721,0,1);
   graph->SetPoint(722,0,1);
   graph->SetPoint(723,0,1);
   graph->SetPoint(724,0,1);
   graph->SetPoint(725,0,1);
   graph->SetPoint(726,0,1);
   graph->SetPoint(727,0,1);
   graph->SetPoint(728,0,1);
   graph->SetPoint(729,0,1);
   graph->SetPoint(730,0,1);
   graph->SetPoint(731,0,1);
   graph->SetPoint(732,0,1);
   graph->SetPoint(733,0,1);
   graph->SetPoint(734,0,1);
   graph->SetPoint(735,0,1);
   graph->SetPoint(736,0,1);
   graph->SetPoint(737,0,1);
   graph->SetPoint(738,0,1);
   graph->SetPoint(739,0,1);
   graph->SetPoint(740,0,1);
   graph->SetPoint(741,0,1);
   graph->SetPoint(742,0,1);
   graph->SetPoint(743,0,1);
   graph->SetPoint(744,0,1);
   graph->SetPoint(745,0,1);
   graph->SetPoint(746,0,1);
   graph->SetPoint(747,0,1);
   graph->SetPoint(748,0,1);
   graph->SetPoint(749,0,1);
   graph->SetPoint(750,0,1);
   graph->SetPoint(751,0,1);
   graph->SetPoint(752,0,1);
   graph->SetPoint(753,0,1);
   graph->SetPoint(754,0,1);
   graph->SetPoint(755,0,1);
   graph->SetPoint(756,0,1);
   graph->SetPoint(757,0,1);
   graph->SetPoint(758,0,1);
   graph->SetPoint(759,0,1);
   graph->SetPoint(760,0,1);
   graph->SetPoint(761,0,1);
   graph->SetPoint(762,0,1);
   graph->SetPoint(763,0,1);
   graph->SetPoint(764,0,1);
   graph->SetPoint(765,0,1);
   graph->SetPoint(766,0,1);
   graph->SetPoint(767,0,1);
   graph->SetPoint(768,0,1);
   graph->SetPoint(769,0,1);
   graph->SetPoint(770,0,1);
   graph->SetPoint(771,0,1);
   graph->SetPoint(772,0,1);
   graph->SetPoint(773,0,1);
   graph->SetPoint(774,0,1);
   graph->SetPoint(775,0,1);
   graph->SetPoint(776,0,1);
   graph->SetPoint(777,0,1);
   graph->SetPoint(778,0,1);
   graph->SetPoint(779,0,1);
   graph->SetPoint(780,0,1);
   graph->SetPoint(781,0,1);
   graph->SetPoint(782,0,1);
   graph->SetPoint(783,0,1);
   graph->SetPoint(784,0,1);
   graph->SetPoint(785,0,1);
   graph->SetPoint(786,0,1);
   graph->SetPoint(787,0,1);
   graph->SetPoint(788,0,1);
   graph->SetPoint(789,0,1);
   graph->SetPoint(790,0,1);
   graph->SetPoint(791,0,1);
   graph->SetPoint(792,0,1);
   graph->SetPoint(793,0,1);
   graph->SetPoint(794,0,1);
   graph->SetPoint(795,0,1);
   graph->SetPoint(796,0,1);
   graph->SetPoint(797,0,1);
   graph->SetPoint(798,0,1);
   graph->SetPoint(799,0,1);
   graph->SetPoint(800,0,1);
   graph->SetPoint(801,0,1);
   graph->SetPoint(802,0,1);
   graph->SetPoint(803,0,1);
   graph->SetPoint(804,0,1);
   graph->SetPoint(805,0,1);
   graph->SetPoint(806,0,1);
   graph->SetPoint(807,0,1);
   graph->SetPoint(808,0,1);
   graph->SetPoint(809,0,1);
   graph->SetPoint(810,0,1);
   graph->SetPoint(811,0,1);
   graph->SetPoint(812,0,1);
   graph->SetPoint(813,0,1);
   graph->SetPoint(814,0,1);
   graph->SetPoint(815,0,1);
   graph->SetPoint(816,0,1);
   graph->SetPoint(817,0,1);
   graph->SetPoint(818,0,1);
   graph->SetPoint(819,0,1);
   graph->SetPoint(820,0,1);
   graph->SetPoint(821,0,1);
   graph->SetPoint(822,0,1);
   graph->SetPoint(823,0,1);
   graph->SetPoint(824,0,1);
   graph->SetPoint(825,0,1);
   graph->SetPoint(826,0,1);
   graph->SetPoint(827,0,1);
   graph->SetPoint(828,0,1);
   graph->SetPoint(829,0,1);
   graph->SetPoint(830,0,1);
   graph->SetPoint(831,0,1);
   graph->SetPoint(832,0,1);
   graph->SetPoint(833,0,1);
   graph->SetPoint(834,0,1);
   graph->SetPoint(835,0,1);
   graph->SetPoint(836,0,1);
   graph->SetPoint(837,0,1);
   graph->SetPoint(838,0,1);
   graph->SetPoint(839,0,1);
   graph->SetPoint(840,0,1);
   graph->SetPoint(841,0,1);
   graph->SetPoint(842,0,1);
   graph->SetPoint(843,0,1);
   graph->SetPoint(844,0,1);
   graph->SetPoint(845,0,1);
   graph->SetPoint(846,0,1);
   graph->SetPoint(847,0,1);
   graph->SetPoint(848,0,1);
   graph->SetPoint(849,0,1);
   graph->SetPoint(850,0,1);
   graph->SetPoint(851,0,1);
   graph->SetPoint(852,0,1);
   graph->SetPoint(853,0,1);
   graph->SetPoint(854,0,1);
   graph->SetPoint(855,0,1);
   graph->SetPoint(856,0,1);
   graph->SetPoint(857,0,1);
   graph->SetPoint(858,0,1);
   graph->SetPoint(859,0,1);
   graph->SetPoint(860,0,1);
   graph->SetPoint(861,0,1);
   graph->SetPoint(862,0,1);
   graph->SetPoint(863,0,1);
   graph->SetPoint(864,0,1);
   graph->SetPoint(865,0,1);
   graph->SetPoint(866,0,1);
   graph->SetPoint(867,0,1);
   graph->SetPoint(868,0,1);
   graph->SetPoint(869,0,1);
   graph->SetPoint(870,0,1);
   graph->SetPoint(871,0,1);
   graph->SetPoint(872,0,1);
   graph->SetPoint(873,0,1);
   graph->SetPoint(874,0,1);
   graph->SetPoint(875,0,1);
   graph->SetPoint(876,0,1);
   graph->SetPoint(877,0,1);
   graph->SetPoint(878,0,1);
   graph->SetPoint(879,0,1);
   graph->SetPoint(880,0,1);
   graph->SetPoint(881,0,1);
   graph->SetPoint(882,0,1);
   graph->SetPoint(883,0,1);
   graph->SetPoint(884,0,1);
   graph->SetPoint(885,0,1);
   graph->SetPoint(886,0,1);
   graph->SetPoint(887,0,1);
   graph->SetPoint(888,0,1);
   graph->SetPoint(889,0,1);
   graph->SetPoint(890,0,1);
   graph->SetPoint(891,0,1);
   graph->SetPoint(892,0,1);
   graph->SetPoint(893,0,1);
   graph->SetPoint(894,0,1);
   graph->SetPoint(895,0,1);
   graph->SetPoint(896,0,1);
   graph->SetPoint(897,0,1);
   graph->SetPoint(898,0,1);
   graph->SetPoint(899,0,1);
   graph->SetPoint(900,0,1);
   graph->SetPoint(901,0,1);
   graph->SetPoint(902,0,1);
   graph->SetPoint(903,0,1);
   graph->SetPoint(904,0,1);
   graph->SetPoint(905,0,1);
   graph->SetPoint(906,0,1);
   graph->SetPoint(907,0,1);
   graph->SetPoint(908,0,1);
   graph->SetPoint(909,0,1);
   graph->SetPoint(910,0,1);
   graph->SetPoint(911,0,1);
   graph->SetPoint(912,0,1);
   graph->SetPoint(913,0,1);
   graph->SetPoint(914,0,1);
   graph->SetPoint(915,0,1);
   graph->SetPoint(916,0,1);
   graph->SetPoint(917,0,1);
   graph->SetPoint(918,0,1);
   graph->SetPoint(919,0,1);
   graph->SetPoint(920,0,1);
   graph->SetPoint(921,0,1);
   graph->SetPoint(922,0,1);
   graph->SetPoint(923,0,1);
   graph->SetPoint(924,0,1);
   graph->SetPoint(925,0,1);
   graph->SetPoint(926,0,1);
   graph->SetPoint(927,0,1);
   graph->SetPoint(928,0,1);
   graph->SetPoint(929,0,1);
   graph->SetPoint(930,0,1);
   graph->SetPoint(931,0,1);
   graph->SetPoint(932,0,1);
   graph->SetPoint(933,0,1);
   graph->SetPoint(934,0,1);
   graph->SetPoint(935,0,1);
   graph->SetPoint(936,0,1);
   graph->SetPoint(937,0,1);
   graph->SetPoint(938,0,1);
   graph->SetPoint(939,0,1);
   graph->SetPoint(940,0,1);
   graph->SetPoint(941,0,1);
   graph->SetPoint(942,0,1);
   graph->SetPoint(943,0,1);
   graph->SetPoint(944,0,1);
   graph->SetPoint(945,0,1);
   graph->SetPoint(946,0,1);
   graph->SetPoint(947,0,1);
   graph->SetPoint(948,0,1);
   graph->SetPoint(949,0,1);
   graph->SetPoint(950,0,1);
   graph->SetPoint(951,0,1);
   graph->SetPoint(952,0,1);
   graph->SetPoint(953,0,1);
   graph->SetPoint(954,0,1);
   graph->SetPoint(955,0,1);
   graph->SetPoint(956,0,1);
   graph->SetPoint(957,0,1);
   graph->SetPoint(958,0,1);
   graph->SetPoint(959,0,1);
   graph->SetPoint(960,0,1);
   graph->SetPoint(961,0,1);
   graph->SetPoint(962,0,1);
   graph->SetPoint(963,0,1);
   graph->SetPoint(964,0,1);
   graph->SetPoint(965,0,1);
   graph->SetPoint(966,0,1);
   graph->SetPoint(967,0,1);
   graph->SetPoint(968,0,1);
   graph->SetPoint(969,0,1);
   graph->SetPoint(970,0,1);
   graph->SetPoint(971,0,1);
   graph->SetPoint(972,0,1);
   graph->SetPoint(973,0,1);
   graph->SetPoint(974,0,1);
   graph->SetPoint(975,0,1);
   graph->SetPoint(976,0,1);
   graph->SetPoint(977,0,1);
   graph->SetPoint(978,0,1);
   graph->SetPoint(979,0,1);
   graph->SetPoint(980,0,1);
   graph->SetPoint(981,0,1);
   graph->SetPoint(982,0,1);
   graph->SetPoint(983,0,1);
   graph->SetPoint(984,0,1);
   graph->SetPoint(985,0,1);
   graph->SetPoint(986,0,1);
   graph->SetPoint(987,0,1);
   graph->SetPoint(988,0,1);
   graph->SetPoint(989,0,1);
   graph->SetPoint(990,0,1);
   graph->SetPoint(991,0,1);
   graph->SetPoint(992,0,1);
   graph->SetPoint(993,0,1);
   graph->SetPoint(994,0,1);
   graph->SetPoint(995,0,1);
   graph->SetPoint(996,0,1);
   graph->SetPoint(997,0,1);
   graph->SetPoint(998,0,1);
   graph->SetPoint(999,0,1);
   
   TH1F *Graph_rocBDT1 = new TH1F("Graph_rocBDT1","Background rejection versus Signal efficiency",1000,0,1.1);
   Graph_rocBDT1->SetMinimum(0);
   Graph_rocBDT1->SetMaximum(1.1);
   Graph_rocBDT1->SetDirectory(0);
   Graph_rocBDT1->SetStats(0);
   Graph_rocBDT1->SetLineWidth(2);
   Graph_rocBDT1->SetMarkerStyle(21);
   Graph_rocBDT1->SetMarkerSize(0.3);
   Graph_rocBDT1->GetXaxis()->SetTitle("Signal efficiency");
   Graph_rocBDT1->GetYaxis()->SetTitle("Background rejection");
   graph->SetHistogram(Graph_rocBDT1);
   
   graph->Draw("apc");
   
   graph = new TGraph(100);
   graph->SetName("rocBDT_int");
   graph->SetTitle("Background rejection versus Signal efficiency (Interpolated Values)");
   graph->SetFillColor(1);
   graph->SetLineColor(34);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(6);
   graph->SetMarkerSize(0.3);
   graph->SetPoint(0,0,1);
   graph->SetPoint(1,0.01,0.9971975448);
   graph->SetPoint(2,0.02,0.9941321837);
   graph->SetPoint(3,0.03,0.9908240909);
   graph->SetPoint(4,0.04,0.9865061938);
   graph->SetPoint(5,0.05,0.9817160848);
   graph->SetPoint(6,0.06,0.9775725923);
   graph->SetPoint(7,0.07,0.9738109218);
   graph->SetPoint(8,0.08,0.9697850334);
   graph->SetPoint(9,0.09,0.9653010478);
   graph->SetPoint(10,0.1,0.9613934367);
   graph->SetPoint(11,0.11,0.9570340196);
   graph->SetPoint(12,0.12,0.9512576861);
   graph->SetPoint(13,0.13,0.9463170287);
   graph->SetPoint(14,0.14,0.9413346977);
   graph->SetPoint(15,0.15,0.9363646874);
   graph->SetPoint(16,0.16,0.9303813192);
   graph->SetPoint(17,0.17,0.9257699584);
   graph->SetPoint(18,0.18,0.9208415642);
   graph->SetPoint(19,0.19,0.9161197995);
   graph->SetPoint(20,0.2,0.9106099074);
   graph->SetPoint(21,0.21,0.9046886432);
   graph->SetPoint(22,0.22,0.8996066347);
   graph->SetPoint(23,0.23,0.8950686724);
   graph->SetPoint(24,0.24,0.8904531639);
   graph->SetPoint(25,0.25,0.8856592196);
   graph->SetPoint(26,0.26,0.8804274838);
   graph->SetPoint(27,0.27,0.8743820874);
   graph->SetPoint(28,0.28,0.8678495168);
   graph->SetPoint(29,0.29,0.8615304006);
   graph->SetPoint(30,0.3,0.8555059856);
   graph->SetPoint(31,0.31,0.8492388045);
   graph->SetPoint(32,0.32,0.8430025268);
   graph->SetPoint(33,0.33,0.8378148319);
   graph->SetPoint(34,0.34,0.8325890866);
   graph->SetPoint(35,0.35,0.8262889127);
   graph->SetPoint(36,0.36,0.8190401827);
   graph->SetPoint(37,0.37,0.8118955817);
   graph->SetPoint(38,0.38,0.8057939912);
   graph->SetPoint(39,0.39,0.7990870759);
   graph->SetPoint(40,0.4,0.7913446199);
   graph->SetPoint(41,0.41,0.7845121638);
   graph->SetPoint(42,0.42,0.7772991896);
   graph->SetPoint(43,0.43,0.7688586917);
   graph->SetPoint(44,0.44,0.7606072289);
   graph->SetPoint(45,0.45,0.7533475233);
   graph->SetPoint(46,0.46,0.7456154191);
   graph->SetPoint(47,0.47,0.7357897486);
   graph->SetPoint(48,0.48,0.7279467899);
   graph->SetPoint(49,0.49,0.7217586069);
   graph->SetPoint(50,0.5,0.7145789477);
   graph->SetPoint(51,0.51,0.7058242023);
   graph->SetPoint(52,0.52,0.69641615);
   graph->SetPoint(53,0.53,0.6873887853);
   graph->SetPoint(54,0.54,0.6787927982);
   graph->SetPoint(55,0.55,0.6708832906);
   graph->SetPoint(56,0.56,0.6629605697);
   graph->SetPoint(57,0.57,0.6535445396);
   graph->SetPoint(58,0.58,0.6444359677);
   graph->SetPoint(59,0.59,0.6355810795);
   graph->SetPoint(60,0.6,0.6256962195);
   graph->SetPoint(61,0.61,0.6157581904);
   graph->SetPoint(62,0.62,0.6075612276);
   graph->SetPoint(63,0.63,0.5969089471);
   graph->SetPoint(64,0.64,0.5860063285);
   graph->SetPoint(65,0.65,0.5760649039);
   graph->SetPoint(66,0.66,0.5681111953);
   graph->SetPoint(67,0.67,0.5577386263);
   graph->SetPoint(68,0.68,0.5463040483);
   graph->SetPoint(69,0.69,0.5355240361);
   graph->SetPoint(70,0.7,0.5240723719);
   graph->SetPoint(71,0.71,0.511969672);
   graph->SetPoint(72,0.72,0.5005278257);
   graph->SetPoint(73,0.73,0.4901542452);
   graph->SetPoint(74,0.74,0.4791867072);
   graph->SetPoint(75,0.75,0.4686092098);
   graph->SetPoint(76,0.76,0.4582879315);
   graph->SetPoint(77,0.77,0.4488474872);
   graph->SetPoint(78,0.78,0.4363418688);
   graph->SetPoint(79,0.79,0.4242630562);
   graph->SetPoint(80,0.8,0.4101866129);
   graph->SetPoint(81,0.81,0.3961778864);
   graph->SetPoint(82,0.82,0.3841394433);
   graph->SetPoint(83,0.83,0.3734408057);
   graph->SetPoint(84,0.84,0.3611578121);
   graph->SetPoint(85,0.85,0.347312568);
   graph->SetPoint(86,0.86,0.3319688164);
   graph->SetPoint(87,0.87,0.3181466714);
   graph->SetPoint(88,0.88,0.3043529977);
   graph->SetPoint(89,0.89,0.2850883879);
   graph->SetPoint(90,0.9,0.2681960873);
   graph->SetPoint(91,0.91,0.2509358962);
   graph->SetPoint(92,0.92,0.2324725211);
   graph->SetPoint(93,0.93,0.2115377375);
   graph->SetPoint(94,0.94,0.1899115828);
   graph->SetPoint(95,0.95,0.1663549224);
   graph->SetPoint(96,0.96,0.1435558614);
   graph->SetPoint(97,0.97,0.1167253658);
   graph->SetPoint(98,0.98,0.08725182806);
   graph->SetPoint(99,0.99,0.05209706235);
   
   TH1F *Graph_rocBDT_int2 = new TH1F("Graph_rocBDT_int2","Background rejection versus Signal efficiency (Interpolated Values)",100,0,1.089);
   Graph_rocBDT_int2->SetMinimum(0);
   Graph_rocBDT_int2->SetMaximum(1.09479);
   Graph_rocBDT_int2->SetDirectory(0);
   Graph_rocBDT_int2->SetStats(0);
   Graph_rocBDT_int2->SetLineWidth(2);
   Graph_rocBDT_int2->SetMarkerStyle(21);
   Graph_rocBDT_int2->SetMarkerSize(0.3);
   graph->SetHistogram(Graph_rocBDT_int2);
   
   graph->Draw(" p");
   
   graph = new TGraph(2);
   graph->SetName("bestLineGraph");
   graph->SetTitle("bestLineGraph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,0.6212605238,0.6063987613);
   graph->SetPoint(1,1,1);
   
   TH1F *Graph_bestLineGraph3 = new TH1F("Graph_bestLineGraph3","bestLineGraph",100,0.5833866,1.037874);
   Graph_bestLineGraph3->SetMinimum(0.5670386);
   Graph_bestLineGraph3->SetMaximum(1.03936);
   Graph_bestLineGraph3->SetDirectory(0);
   Graph_bestLineGraph3->SetStats(0);
   Graph_bestLineGraph3->SetLineWidth(2);
   Graph_bestLineGraph3->SetMarkerStyle(21);
   Graph_bestLineGraph3->SetMarkerSize(0.3);
   graph->SetHistogram(Graph_bestLineGraph3);
   
   graph->Draw(" lp");
   
   TH2F *frame = new TH2F("frame","Background rejection versus Signal efficiency",500,0,1,500,0.2,1);
   frame->SetStats(0);
   frame->SetLineWidth(2);
   frame->SetMarkerStyle(21);
   frame->SetMarkerSize(0.3);
   frame->GetXaxis()->SetTitle("Signal efficiency");
   frame->GetXaxis()->SetLabelOffset(0.012);
   frame->GetXaxis()->SetTitleSize(0.045);
   frame->GetXaxis()->SetTitleOffset(1.25);
   frame->GetYaxis()->SetTitle("Background rejection");
   frame->GetYaxis()->SetLabelOffset(0.012);
   frame->GetYaxis()->SetTitleSize(0.045);
   frame->GetYaxis()->SetTitleOffset(1.22);
   frame->Draw("sameaxis");
   
   TLegend *leg = new TLegend(0.15,0.171,0.643,0.336,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(34);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","MVA Method:","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("rocBDT","BDT","lp");
   entry->SetLineColor(34);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(0.3);
   entry=leg->AddEntry("rocBDT_int","BDT (Interpolated Points)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(6);
   entry->SetMarkerSize(0.3);
   entry=leg->AddEntry("bestLineGraph","Distance to (1,1) = 0.5462","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","Best Point = (0.6213,0.6064)","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","Area Under Curve = 0.6598","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.01,0.9390678,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);

   ci = TColor::GetColor("#5d6b7d");
   pt->SetFillColor(ci);
   pt->SetLineColor(34);
   pt->SetTextColor(0);
   TText *text = pt->AddText("Background rejection versus Signal efficiency");
   pt->Draw();
  
// ------------>Primitives in pad: imgpad
   TPad *imgpad = new TPad("imgpad", "imgpad",0.789257,0.91,0.95,0.965);
   imgpad->Draw();
   imgpad->cd();
   imgpad->Range(0,0,1,1);
   imgpad->SetFillColor(0);
   imgpad->SetBorderMode(0);
   imgpad->SetBorderSize(2);
   imgpad->SetTickx(1);
   imgpad->SetTicky(1);
   imgpad->SetLeftMargin(0);
   imgpad->SetRightMargin(0);
   imgpad->SetTopMargin(0);
   imgpad->SetBottomMargin(0);
   imgpad->SetFrameBorderMode(0);
   imgpad->SetFrameLineColor(0);
   imgpad->SetFrameBorderMode(0);

/* XPM */
 char *xpm_tmva_logo_gif_6[] = {
/* columns rows colors chars-per-pixel */
"103 25 89 1",
"  c #6A4F7B",
". c #67557B",
"X c #75597A",
"o c #FF0303",
"O c #FF1919",
"+ c #FF2A09",
"@ c #FF3D0C",
"# c #FF2020",
"$ c #FF3A3A",
"% c #FF6012",
"& c #FF7B18",
"* c #B17B58",
"= c #8B646A",
"- c #936964",
"; c #FF4444",
": c #FF5252",
"> c #FF6D6D",
", c #FF7E6A",
"< c #FF7979",
"1 c #34399B",
"2 c #3536A0",
"3 c #423C91",
"4 c #3F409E",
"5 c #49408D",
"6 c #5E4B81",
"7 c #464197",
"8 c #624E81",
"9 c #695180",
"0 c #4444A5",
"q c #5D5DAD",
"w c #5D5DB3",
"e c #6C62A3",
"r c #6D6DB9",
"t c #7474B8",
"y c #7D7DC3",
"u c #D37C95",
"i c #FF881B",
"p c #FF9E1F",
"a c #D28E3F",
"s c #FF8721",
"d c #F59F2A",
"f c #E79833",
"g c #FFA621",
"h c #FFAE30",
"j c #FFB237",
"k c #BE824C",
"l c #CD8B45",
"z c #D38D40",
"x c #D79540",
"c c #FFB845",
"v c #FFBE54",
"b c #F2BC6D",
"n c #FFC25D",
"m c #FFC360",
"M c #FFC673",
"N c #9183AB",
"B c #8B81B2",
"V c #FF8686",
"C c #FFAFAF",
"Z c #FFBFBF",
"A c #8686C6",
"S c #9C9CCC",
"D c #9B9BD1",
"F c #A0A0D3",
"G c #B9B9DB",
"H c #BEBEE2",
"J c #C6BBC9",
"K c #D3B2CC",
"L c #FFD48B",
"P c #FFDB9E",
"I c #E3CBBF",
"U c #FFDEAF",
"Y c #FFDFB7",
"T c #FFE1AC",
"R c #FFE8BD",
"E c #D3C2C1",
"W c #FFC2C2",
"Q c #F9D9DF",
"! c #CCCCEB",
"~ c #D3CCE5",
"^ c #D0D0EC",
"/ c #DDDDF1",
"( c #FFEBC3",
") c #FFEDD2",
"_ c #FFF0D3",
"` c #E7E7F6",
"' c #FFF8E4",
"] c #FFFFFF",
"[ c None",
"]]]]]]]]]]]]]]]]]](mggjM_]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]",
"]]]]]]]]]]]]]]]]]ngggggggT]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]",
"]]]]]]]]]]]]]]]]LgggggggggR]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]",
"]]]]]]]]]]]]]]]'ggggggggggc]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]",
"]]]]]]]]]]]]]]]Lggggggggggg_]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]",
"]]]]]]]]]]]]]]]ngggggggggggP]]]]]]]]]]]]]]WWZWWWZWWWZQ^!^^]]]]]]^!^^]]!^!]]]]]]]!^!]]]]]/^!^]]]]]]]]]]]",
"]]]]]]]]]]]]]]]ngggggggggggP]]]]]]]]]]]]]Wooooooooooou1124]]]]]F112q]`112S]]]]]S12t]]]]]0112F]]]]]]]]]]",
"]]]]]]]]]]]]]]]Lggggggggggg(]]]]]]]]]]]]]<oooooooooooK1211F]]]]2112q]]q210]]]]]q12G]]]]H1121q]]]]]]]]]]",
"]]]]]]]]]]]]]]](ggggggggggg]]]]]]]]]]]]]]QWWZ<oooCWWW~11210]]]G1211w]]G211!]]]!110]]]]]r11211/]]]]]]]]]",
"]]]]]]]]]]]]]]]]vgggggggggP]]]]]]]]]]]]]]]]]]>oo#]]]]^12111F]]r1121w]]]211D]]]A11y]]]]]121011D]]]]]]]]]",
"]]]]]]]]]]]]]]]]'jgggggggv]]]]]]]]]]]]]]]]]]];oo>]]]]^121q1w]!11w11w]]]t12q]]]011H]]]]F11yG11w]]]]]]]]]",
"]]]]]]]]]]]]]]]](MLggggjUL']]]]]]]]]]]]]]]]]]oooC]]]]^121S21!q10A11w]]]H112`]G210]]]]]r11!]121^]]]]]]]]",
"]]]]]]]]'((((_]]M]]'(U(]]]m]](((((]]]]]]]]]]WoooQ]]]]^121`11012GA11w]]]]121F]t21A]]]]]210]]r11A]]]]]]]]",
"]]]]]]]_']]]]](M]]]]]]]]]]'v(]]]]](']]]]]]]]VooO]]]]]^121]t2110]A11w]]]]r11w]121!]]]]F11t]]D110]]]]]]]]",
"]]]]]]_]]]]]]]](]]]]]]]]]]]_]]]]]]]'']]]]]]]$oo:]]]]]^121]/111A]A11w]]]]H112S110]]]]]q210qr0112!]]]]]]]",
")((((R]]]]]]]]]](((((((((((]]]]]]]]]((((((((ooo,(((((E111((e11I(B11q(((((711211N((((J1121112111t((((((_",
"cggggL]]]]]]]]]]Uggggggggg']]]]]]]]]]cgggggiooo&gggggz111ggggggg=126ggggg-11211lgggg=123.9 96125ggggggv",
"cgggg(]]]]]]]]]]_ggggggggc]]]]]]]]]]]Lggggg%ooopgggggz111ggggggg=126gggggf11217ggggd111*ggggf112lgggggv",
"cgggg(]]]]]]]]]]_ggggggggv]]]]]]]]]]]Pggggg@oo+ggggggz111ggggggg=126gggggg8111-ggggk123gggggg611Xgggggv",
"cgggg(]]]]]]]]]]_ggggggggj]]]]]]]]]]]Mgggggi&isgggggggzlagggggggflaxggggggflalgggggflaxggggggflalgggggn",
"cggggP]]]]]]]]]]Rggggggggg']]]]]]]]]]cggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggv",
"cggggj]]]]]]]]]]ngggggggggP]]]]]]]]](gggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggn",
"cgggggv]]]]]]]]Pggggggggggg_]]]]]]]'hgggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggn",
"cggggggm]]]]]]Lggggggggggggg(]]]]](cggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggv",
"bnvnvnvnmY((RMnvnvnvnvnvnvnvnP(((UnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvL"
};


   TImage *tmva_logo_gif_ = TImage::Create();
   tmva_logo_gif_->SetImageBuffer(xpm_tmva_logo_gif_6, TImage::kXpm);
   tmva_logo_gif_->Draw();
   imgpad->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
