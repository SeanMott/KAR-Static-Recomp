//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000A604.hpp"
#include "fn_8022CB74.hpp"
#include "fn_8022372C.hpp"
#include "fn_8022372C.hpp"
#include "fn_801922B0.hpp"
#include "fn_801922E4.hpp"
#include "fn_80192298.hpp"
#include "fn_80191FDC.hpp"
#include "fn_calculatePowerUpSpawnShootAngle?.hpp"
#include "fn_80064C18.hpp"
#include "fn_80062ECC.hpp"
#include "fn_80223720.hpp"
#include "fn_80223720.hpp"
#include "fn_801922B0.hpp"
#include "fn_80223720.hpp"
#include "fn_80223720.hpp"
#include "fn_80204950.hpp"
#include "fn_801922E4.hpp"
#include "fn_80204984.hpp"
#include "fn_8019203C.hpp"
#include "fn_80009534.hpp"
#include "fn_80223400.hpp"
#include "fn_80223720.hpp"
#include "fn_80223720.hpp"
#include "fn_801922B0.hpp"
#include "fn_80223720.hpp"
#include "fn_80223720.hpp"
#include "fn_80204950.hpp"
#include "fn_801922E4.hpp"
#include "fn_80204984.hpp"
#include "fn_800D1838.hpp"
#include "fn_80192318.hpp"
#include "fn_80223720.hpp"
#include "fn_80223720.hpp"
#include "fn_801922B0.hpp"
#include "fn_80223720.hpp"
#include "fn_80223720.hpp"
#include "fn_80204950.hpp"
#include "fn_801922E4.hpp"
#include "fn_80204984.hpp"
#include "fn_801922E4.hpp"



void fn_80223738(PPC::Runtime::GCContext* context)
{
/*80223738 00220538*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8022373C 0022053C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80223740 00220540*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80223744 00220544*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80223748 00220548*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8022374C 0022054C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80223750 00220550*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*80223754 00220554*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80223758 00220558*/ PPC::Runtime::ASM::bne(.L_80223B28);
/*8022375C 0022055C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/* 80223760 00220560  54 80 E7 FF */ extrwi. context->r0 , context->r4 , 1 , 27
/*80223764 00220564*/ PPC::Runtime::ASM::bne(.L_802239B0);
/*80223768 00220568*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8022376C 0022056C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80223770 00220570*/ PPC::Runtime::ASM::bne(.L_802237D8);
/*80223774 00220574*/ PPC::Runtime::ASM::extrwi(context->r3, context->r4, 3, 24);
/*80223778 00220578*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x5);
/*8022377C 0022057C*/ PPC::Runtime::ASM::beq(.L_802237D8);
/*80223780 00220580*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80223784 00220584*/ PPC::Runtime::ASM::beq(.L_802237D8);
/*80223788 00220588*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8022378C 0022058C*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r0, 5, 24, 26);
/*80223790 00220590*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*80223794 00220594*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*80223798 00220598*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 3, 24);
/*8022379C 0022059C*/ PPC::Runtime::ASM::bl(fn_8000A604);
/*802237A0 002205A0*/ PPC::Runtime::ASM::bl(fn_8022CB74);
/*802237A4 002205A4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802237A8 002205A8*/ PPC::Runtime::ASM::beq(.L_802237C4);
/*802237AC 002205AC*/ PPC::Runtime::ASM::lis(context->r4, fn_8022372C @ Get_MemoryOffset_HighBit);
/*802237B0 002205B0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*802237B4 002205B4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_8022372C @ Get_MemoryOffset_LowBit);
/*802237B8 002205B8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802237BC 002205BC*/ PPC::Runtime::ASM::bl(fn_801922B0);
/*802237C0 002205C0*/ PPC::Runtime::ASM::b(.L_802237D8);
RUNTIME_PPC_JUMP_LABEL(.L_802237C4, 0x802237C4) //this is a jump label
/*802237C4 002205C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*802237C8 002205C8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802237CC 002205CC*/ PPC::Runtime::ASM::bl(fn_801922E4);
/*802237D0 002205D0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802237D4 002205D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802237D8, 0x802237D8) //this is a jump label
/*802237D8 002205D8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*802237DC 002205DC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802237E0 002205E0*/ PPC::Runtime::ASM::beq(.L_80223A48);
/*802237E4 002205E4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802237E8 002205E8*/ PPC::Runtime::ASM::bl(fn_80192298);
/*802237EC 002205EC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802237F0 002205F0*/ PPC::Runtime::ASM::beq(.L_802238F8);
/*802237F4 002205F4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802237F8 002205F8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*802237FC 002205FC*/ PPC::Runtime::ASM::bl(fn_80191FDC);
/*80223800 00220600*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80223804 00220604*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80223808 00220608*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8022380C 0022060C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80223810 00220610*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*80223814 00220614*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80223818 00220618*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8022381C 0022061C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80223820 00220620*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80223824 00220624*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80223828 00220628*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8022382C 0022062C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*80223830 00220630*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80223834 00220634*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*80223838 00220638*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8022383C 0022063C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80223840 00220640*/ PPC::Runtime::ASM::bge(.L_802238F0);
/*80223844 00220644*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80223848 00220648*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8022384C 0022064C*/ PPC::Runtime::ASM::bl(fn_calculatePowerUpSpawnShootAngle?);
/*80223850 00220650*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80223854 00220654*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80223858 00220658*/ PPC::Runtime::ASM::fneg(context->f8, context->f0);
/*8022385C 0022065C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80223860 00220660*/ PPC::Runtime::ASM::fneg(context->f9, context->f1);
/*80223864 00220664*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80223868 00220668*/ PPC::Runtime::ASM::fneg(context->f7, context->f0);
/*8022386C 0022066C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80223870 00220670*/ PPC::Runtime::ASM::frsp(context->f2, context->f8);
/*80223874 00220674*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80223878 00220678*/ PPC::Runtime::ASM::frsp(context->f4, context->f9);
/*8022387C 0022067C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E28F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80223880 00220680*/ PPC::Runtime::ASM::frsp(context->f6, context->f7);
/*80223884 00220684*/ PPC::Runtime::ASM::stfs(context->f9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80223888 00220688*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*8022388C 0022068C*/ PPC::Runtime::ASM::stfs(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80223890 00220690*/ PPC::Runtime::ASM::stfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80223894 00220694*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f1);
/*80223898 00220698*/ PPC::Runtime::ASM::fmadds(context->f1, context->f6, context->f5, context->f1);
/*8022389C 0022069C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802238A0 002206A0*/ PPC::Runtime::ASM::bge(.L_802238A8);
/*802238A4 002206A4*/ PPC::Runtime::ASM::fneg(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_802238A8, 0x802238A8) //this is a jump label
/*802238A8 002206A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*802238AC 002206AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802238B0 002206B0*/ PPC::Runtime::ASM::bge(.L_802238F0);
/*802238B4 002206B4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802238B8 002206B8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*802238BC 002206BC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*802238C0 002206C0*/ PPC::Runtime::ASM::bl(fn_80064C18);
/*802238C4 002206C4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xc);
/*802238C8 002206C8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*802238CC 002206CC*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*802238D0 002206D0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E28FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802238D4 002206D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*802238D8 002206D8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*802238DC 002206DC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802238E0 002206E0*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802238E4 002206E4*/ PPC::Runtime::ASM::bne(.L_802238F0);
/*802238E8 002206E8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*802238EC 002206EC*/ PPC::Runtime::ASM::b(.L_802238FC);
RUNTIME_PPC_JUMP_LABEL(.L_802238F0, 0x802238F0) //this is a jump label
/*802238F0 002206F0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802238F4 002206F4*/ PPC::Runtime::ASM::b(.L_802238FC);
RUNTIME_PPC_JUMP_LABEL(.L_802238F8, 0x802238F8) //this is a jump label
/*802238F8 002206F8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802238FC, 0x802238FC) //this is a jump label
/*802238FC 002206FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80223900 00220700*/ PPC::Runtime::ASM::beq(.L_80223A48);
/*80223904 00220704*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80223908 00220708*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8022390C 0022070C*/ PPC::Runtime::ASM::beq(.L_80223958);
/*80223910 00220710*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80223914 00220714*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80223918 00220718*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x15);
/*8022391C 0022071C*/ PPC::Runtime::ASM::beq(.L_80223944);
/*80223920 00220720*/ PPC::Runtime::ASM::bge(.L_80223994);
/*80223924 00220724*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*80223928 00220728*/ PPC::Runtime::ASM::beq(.L_80223930);
/*8022392C 0022072C*/ PPC::Runtime::ASM::b(.L_80223994);
RUNTIME_PPC_JUMP_LABEL(.L_80223930, 0x80223930) //this is a jump label
/*80223930 00220730*/ PPC::Runtime::ASM::lis(context->r4, fn_80223720 @ Get_MemoryOffset_HighBit);
/*80223934 00220734*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_80223720 @ Get_MemoryOffset_LowBit);
/*80223938 00220738*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8022393C 0022073C*/ PPC::Runtime::ASM::bl(fn_801922B0);
/*80223940 00220740*/ PPC::Runtime::ASM::b(.L_80223994);
RUNTIME_PPC_JUMP_LABEL(.L_80223944, 0x80223944) //this is a jump label
/*80223944 00220744*/ PPC::Runtime::ASM::lis(context->r4, fn_80223720 @ Get_MemoryOffset_HighBit);
/*80223948 00220748*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_80223720 @ Get_MemoryOffset_LowBit);
/*8022394C 0022074C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80223950 00220750*/ PPC::Runtime::ASM::bl(fn_80204950);
/*80223954 00220754*/ PPC::Runtime::ASM::b(.L_80223994);
RUNTIME_PPC_JUMP_LABEL(.L_80223958, 0x80223958) //this is a jump label
/*80223958 00220758*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8022395C 0022075C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80223960 00220760*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x15);
/*80223964 00220764*/ PPC::Runtime::ASM::beq(.L_80223984);
/*80223968 00220768*/ PPC::Runtime::ASM::bge(.L_8022398C);
/*8022396C 0022076C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*80223970 00220770*/ PPC::Runtime::ASM::beq(.L_80223978);
/*80223974 00220774*/ PPC::Runtime::ASM::b(.L_8022398C);
RUNTIME_PPC_JUMP_LABEL(.L_80223978, 0x80223978) //this is a jump label
/*80223978 00220778*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8022397C 0022077C*/ PPC::Runtime::ASM::bl(fn_801922E4);
/*80223980 00220780*/ PPC::Runtime::ASM::b(.L_8022398C);
RUNTIME_PPC_JUMP_LABEL(.L_80223984, 0x80223984) //this is a jump label
/*80223984 00220784*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80223988 00220788*/ PPC::Runtime::ASM::bl(fn_80204984);
RUNTIME_PPC_JUMP_LABEL(.L_8022398C, 0x8022398C) //this is a jump label
/*8022398C 0022078C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80223990 00220790*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80223994, 0x80223994) //this is a jump label
/*80223994 00220794*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80223998 00220798*/ PPC::Runtime::ASM::bl(fn_8019203C);
/*8022399C 0022079C*/ PPC::Runtime::ASM::bl(fn_80009534);
/*802239A0 002207A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*802239A4 002207A4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 24, 26);
/*802239A8 002207A8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*802239AC 002207AC*/ PPC::Runtime::ASM::b(.L_80223B28);
RUNTIME_PPC_JUMP_LABEL(.L_802239B0, 0x802239B0) //this is a jump label
/*802239B0 002207B0*/ PPC::Runtime::ASM::bl(fn_80223400);
/*802239B4 002207B4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802239B8 002207B8*/ PPC::Runtime::ASM::beq(.L_80223A48);
/*802239BC 002207BC*/ PPC::Runtime::ASM::beq(.L_80223A08);
/*802239C0 002207C0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*802239C4 002207C4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802239C8 002207C8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x15);
/*802239CC 002207CC*/ PPC::Runtime::ASM::beq(.L_802239F4);
/*802239D0 002207D0*/ PPC::Runtime::ASM::bge(.L_80223B28);
/*802239D4 002207D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*802239D8 002207D8*/ PPC::Runtime::ASM::beq(.L_802239E0);
/*802239DC 002207DC*/ PPC::Runtime::ASM::b(.L_80223B28);
RUNTIME_PPC_JUMP_LABEL(.L_802239E0, 0x802239E0) //this is a jump label
/*802239E0 002207E0*/ PPC::Runtime::ASM::lis(context->r5, fn_80223720 @ Get_MemoryOffset_HighBit);
/*802239E4 002207E4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802239E8 002207E8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, fn_80223720 @ Get_MemoryOffset_LowBit);
/*802239EC 002207EC*/ PPC::Runtime::ASM::bl(fn_801922B0);
/*802239F0 002207F0*/ PPC::Runtime::ASM::b(.L_80223B28);
RUNTIME_PPC_JUMP_LABEL(.L_802239F4, 0x802239F4) //this is a jump label
/*802239F4 002207F4*/ PPC::Runtime::ASM::lis(context->r5, fn_80223720 @ Get_MemoryOffset_HighBit);
/*802239F8 002207F8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802239FC 002207FC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, fn_80223720 @ Get_MemoryOffset_LowBit);
/*80223A00 00220800*/ PPC::Runtime::ASM::bl(fn_80204950);
/*80223A04 00220804*/ PPC::Runtime::ASM::b(.L_80223B28);
RUNTIME_PPC_JUMP_LABEL(.L_80223A08, 0x80223A08) //this is a jump label
/*80223A08 00220808*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80223A0C 0022080C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80223A10 00220810*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x15);
/*80223A14 00220814*/ PPC::Runtime::ASM::beq(.L_80223A34);
/*80223A18 00220818*/ PPC::Runtime::ASM::bge(.L_80223A3C);
/*80223A1C 0022081C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*80223A20 00220820*/ PPC::Runtime::ASM::beq(.L_80223A28);
/*80223A24 00220824*/ PPC::Runtime::ASM::b(.L_80223A3C);
RUNTIME_PPC_JUMP_LABEL(.L_80223A28, 0x80223A28) //this is a jump label
/*80223A28 00220828*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80223A2C 0022082C*/ PPC::Runtime::ASM::bl(fn_801922E4);
/*80223A30 00220830*/ PPC::Runtime::ASM::b(.L_80223A3C);
RUNTIME_PPC_JUMP_LABEL(.L_80223A34, 0x80223A34) //this is a jump label
/*80223A34 00220834*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80223A38 00220838*/ PPC::Runtime::ASM::bl(fn_80204984);
RUNTIME_PPC_JUMP_LABEL(.L_80223A3C, 0x80223A3C) //this is a jump label
/*80223A3C 0022083C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80223A40 00220840*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80223A44 00220844*/ PPC::Runtime::ASM::b(.L_80223B28);
RUNTIME_PPC_JUMP_LABEL(.L_80223A48, 0x80223A48) //this is a jump label
/*80223A48 00220848*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80223A4C 0022084C*/ PPC::Runtime::ASM::bl(fn_800D1838);
/*80223A50 00220850*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80223A54 00220854*/ PPC::Runtime::ASM::bne(.L_80223B28);
/*80223A58 00220858*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80223A5C 0022085C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80223A60 00220860*/ PPC::Runtime::ASM::beq(.L_80223B28);
/*80223A64 00220864*/ PPC::Runtime::ASM::bl(fn_80192318);
/*80223A68 00220868*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80223A6C 0022086C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*80223A70 00220870*/ PPC::Runtime::ASM::bne(.L_80223B28);
/*80223A74 00220874*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80223A78 00220878*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80223A7C 0022087C*/ PPC::Runtime::ASM::beq(.L_80223AC8);
/*80223A80 00220880*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80223A84 00220884*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80223A88 00220888*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x15);
/*80223A8C 0022088C*/ PPC::Runtime::ASM::beq(.L_80223AB4);
/*80223A90 00220890*/ PPC::Runtime::ASM::bge(.L_80223B04);
/*80223A94 00220894*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*80223A98 00220898*/ PPC::Runtime::ASM::beq(.L_80223AA0);
/*80223A9C 0022089C*/ PPC::Runtime::ASM::b(.L_80223B04);
RUNTIME_PPC_JUMP_LABEL(.L_80223AA0, 0x80223AA0) //this is a jump label
/*80223AA0 002208A0*/ PPC::Runtime::ASM::lis(context->r4, fn_80223720 @ Get_MemoryOffset_HighBit);
/*80223AA4 002208A4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_80223720 @ Get_MemoryOffset_LowBit);
/*80223AA8 002208A8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80223AAC 002208AC*/ PPC::Runtime::ASM::bl(fn_801922B0);
/*80223AB0 002208B0*/ PPC::Runtime::ASM::b(.L_80223B04);
RUNTIME_PPC_JUMP_LABEL(.L_80223AB4, 0x80223AB4) //this is a jump label
/*80223AB4 002208B4*/ PPC::Runtime::ASM::lis(context->r4, fn_80223720 @ Get_MemoryOffset_HighBit);
/*80223AB8 002208B8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, fn_80223720 @ Get_MemoryOffset_LowBit);
/*80223ABC 002208BC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80223AC0 002208C0*/ PPC::Runtime::ASM::bl(fn_80204950);
/*80223AC4 002208C4*/ PPC::Runtime::ASM::b(.L_80223B04);
RUNTIME_PPC_JUMP_LABEL(.L_80223AC8, 0x80223AC8) //this is a jump label
/*80223AC8 002208C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80223ACC 002208CC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80223AD0 002208D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x15);
/*80223AD4 002208D4*/ PPC::Runtime::ASM::beq(.L_80223AF4);
/*80223AD8 002208D8*/ PPC::Runtime::ASM::bge(.L_80223AFC);
/*80223ADC 002208DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*80223AE0 002208E0*/ PPC::Runtime::ASM::beq(.L_80223AE8);
/*80223AE4 002208E4*/ PPC::Runtime::ASM::b(.L_80223AFC);
RUNTIME_PPC_JUMP_LABEL(.L_80223AE8, 0x80223AE8) //this is a jump label
/*80223AE8 002208E8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80223AEC 002208EC*/ PPC::Runtime::ASM::bl(fn_801922E4);
/*80223AF0 002208F0*/ PPC::Runtime::ASM::b(.L_80223AFC);
RUNTIME_PPC_JUMP_LABEL(.L_80223AF4, 0x80223AF4) //this is a jump label
/*80223AF4 002208F4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80223AF8 002208F8*/ PPC::Runtime::ASM::bl(fn_80204984);
RUNTIME_PPC_JUMP_LABEL(.L_80223AFC, 0x80223AFC) //this is a jump label
/*80223AFC 002208FC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80223B00 00220900*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80223B04, 0x80223B04) //this is a jump label
/*80223B04 00220904*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80223B08 00220908*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80223B0C 0022090C*/ PPC::Runtime::ASM::bl(fn_801922E4);
/*80223B10 00220910*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80223B14 00220914*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80223B18 00220918*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*80223B1C 0022091C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*80223B20 00220920*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*80223B24 00220924*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80223B28, 0x80223B28) //this is a jump label
/*80223B28 00220928*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80223B2C 0022092C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80223B30 00220930*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80223B34 00220934*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80223B38 00220938*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80223B3C 0022093C*/ PPC::Runtime::ASM::blr();
}