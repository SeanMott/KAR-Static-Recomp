//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_destroyBigStar.hpp"
#include "fn_80104BE0.hpp"
#include "fn_80105CB0.hpp"
#include "fn_800D7AD0.hpp"
#include "fn_hitBigStar_SpawnPowerups.hpp"
#include "fn_800F7044.hpp"
#include "fn_800EA084.hpp"
#include "fn_DrawableModel_Draw_TakeNoParams.hpp"
#include "fn_killWhispy.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800F7044.hpp"
#include "fn_800EA084.hpp"



void fn_80102794(PPC::Runtime::GCContext* context)
{
/*80102794 000FF594*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80102798 000FF598*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010279C 000FF59C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801027A0 000FF5A0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*801027A4 000FF5A4*/ PPC::Runtime::ASM::bl(_savegpr_22);
/*801027A8 000FF5A8*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*801027AC 000FF5AC*/ PPC::Runtime::ASM::mr(context->r25, context->r4);
/*801027B0 000FF5B0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801027B4 000FF5B4*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*801027B8 000FF5B8*/ PPC::Runtime::ASM::lis(context->r8, StructWithFuncPtrs_90 @ Get_MemoryOffset_HighBit);
/*801027BC 000FF5BC*/ PPC::Runtime::ASM::mr(context->r23, context->r6);
/*801027C0 000FF5C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*801027C4 000FF5C4*/ PPC::Runtime::ASM::mr(context->r26, context->r7);
/*801027C8 000FF5C8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r29));
/*801027CC 000FF5CC*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*801027D0 000FF5D0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801027D4 000FF5D4*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*801027D8 000FF5D8*/ PPC::Runtime::ASM::addi(context->r31, context->r8, StructWithFuncPtrs_90 @ Get_MemoryOffset_LowBit);
/*801027DC 000FF5DC*/ PPC::Runtime::ASM::bl(fn_destroyBigStar);
/*801027E0 000FF5E0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801027E4 000FF5E4*/ PPC::Runtime::ASM::beq(.L_801027F0);
/*801027E8 000FF5E8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801027EC 000FF5EC*/ PPC::Runtime::ASM::b(.L_80102B10);
RUNTIME_PPC_JUMP_LABEL(.L_801027F0, 0x801027F0) //this is a jump label
/*801027F0 000FF5F0*/ PPC::Runtime::ASM::slwi(context->r22, context->r23, 6);
/*801027F4 000FF5F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*801027F8 000FF5F8*/ PPC::Runtime::ASM::addi(context->r0, context->r22, 0x3c);
/*801027FC 000FF5FC*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r0);
/* 80102800 000FF600  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*80102804 000FF604*/ PPC::Runtime::ASM::beq(.L_80102818);
/*80102808 000FF608*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x84);
/*8010280C 000FF60C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x90);
/*80102810 000FF610*/ PPC::Runtime::ASM::li(context->r4, 0xdd);
/*80102814 000FF614*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80102818, 0x80102818) //this is a jump label
/*80102818 000FF618*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*8010281C 000FF61C*/ PPC::Runtime::ASM::addi(context->r3, context->r22, 0xc);
/*80102820 000FF620*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*80102824 000FF624*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*80102828 000FF628*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*8010282C 000FF62C*/ PPC::Runtime::ASM::mr(context->r6, context->r23);
/*80102830 000FF630*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80102834 000FF634*/ PPC::Runtime::ASM::mr(context->r7, context->r26);
/*80102838 000FF638*/ PPC::Runtime::ASM::addi(context->r8, context->r29, 0x134);
/*8010283C 000FF63C*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80102840 000FF640*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80102844 000FF644*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80102848 000FF648*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*8010284C 000FF64C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80102850 000FF650*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80102854 000FF654*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80102858 000FF658*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8010285C 000FF65C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80102860 000FF660*/ PPC::Runtime::ASM::bl(fn_80104BE0);
/*80102864 000FF664*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80102868 000FF668*/ PPC::Runtime::ASM::beq(.L_801029D0);
/*8010286C 000FF66C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80102870 000FF670*/ PPC::Runtime::ASM::bl(fn_80105CB0);
/*80102874 000FF674*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r24));
/*80102878 000FF678*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8010287C 000FF67C*/ PPC::Runtime::ASM::lwz(context->r22, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80102880 000FF680*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80102884 000FF684*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80102888 000FF688*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r29));
/*8010288C 000FF68C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80102890 000FF690*/ PPC::Runtime::ASM::bl(fn_800D7AD0);
/*80102894 000FF694*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80102898 000FF698*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8010289C 000FF69C*/ PPC::Runtime::ASM::beq(.L_801028B8);
/*801028A0 000FF6A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801028A4 000FF6A4*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*801028A8 000FF6A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r22));
/*801028AC 000FF6AC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*801028B0 000FF6B0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*801028B4 000FF6B4*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
RUNTIME_PPC_JUMP_LABEL(.L_801028B8, 0x801028B8) //this is a jump label
/*801028B8 000FF6B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*801028BC 000FF6BC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*801028C0 000FF6C0*/ PPC::Runtime::ASM::beq(.L_801028E4);
/*801028C4 000FF6C4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*801028C8 000FF6C8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801028CC 000FF6CC*/ PPC::Runtime::ASM::addi(context->r5, context->r25, 0x14);
/*801028D0 000FF6D0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*801028D4 000FF6D4*/ PPC::Runtime::ASM::neg(context->r0, context->r6);
/*801028D8 000FF6D8*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r6);
/*801028DC 000FF6DC*/ PPC::Runtime::ASM::srwi(context->r6, context->r0, 31);
/*801028E0 000FF6E0*/ PPC::Runtime::ASM::bl(fn_hitBigStar_SpawnPowerups);
RUNTIME_PPC_JUMP_LABEL(.L_801028E4, 0x801028E4) //this is a jump label
/*801028E4 000FF6E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*801028E8 000FF6E8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*801028EC 000FF6EC*/ PPC::Runtime::ASM::ble(.L_80102900);
/*801028F0 000FF6F0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x34);
/*801028F4 000FF6F4*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x48);
/*801028F8 000FF6F8*/ PPC::Runtime::ASM::li(context->r4, 0x8f);
/*801028FC 000FF6FC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80102900, 0x80102900) //this is a jump label
/*80102900 000FF700*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80102904 000FF704*/ PPC::Runtime::ASM::mr(context->r22, context->r29);
/*80102908 000FF708*/ PPC::Runtime::ASM::mr(context->r23, context->r31);
/*8010290C 000FF70C*/ PPC::Runtime::ASM::b(.L_80102948);
RUNTIME_PPC_JUMP_LABEL(.L_80102910, 0x80102910) //this is a jump label
/*80102910 000FF710*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*80102914 000FF714*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80102918 000FF718*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8010291C 000FF71C*/ PPC::Runtime::ASM::mr(context->r6, context->r26);
/*80102920 000FF720*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r23);
/*80102924 000FF724*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x8);
/*80102928 000FF728*/ PPC::Runtime::ASM::addi(context->r8, context->r25, 0x14);
/*8010292C 000FF72C*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80102930 000FF730*/ PPC::Runtime::ASM::bl(fn_800F7044);
/*80102934 000FF734*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r22));
/*80102938 000FF738*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1c);
/*8010293C 000FF73C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80102940 000FF740*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r22));
/*80102944 000FF744*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_80102948, 0x80102948) //this is a jump label
/*80102948 000FF748*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8010294C 000FF74C*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*80102950 000FF750*/ PPC::Runtime::ASM::blt(.L_80102910);
/*80102954 000FF754*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r29));
/*80102958 000FF758*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8010295C 000FF75C*/ PPC::Runtime::ASM::ble(.L_8010296C);
/*80102960 000FF760*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x118);
/*80102964 000FF764*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80102968 000FF768*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_8010296C, 0x8010296C) //this is a jump label
/*8010296C 000FF76C*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x5);
/*80102970 000FF770*/ PPC::Runtime::ASM::beq(.L_80102980);
/*80102974 000FF774*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80102978 000FF778*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8010297C 000FF77C*/ PPC::Runtime::ASM::bl(fn_DrawableModel_Draw_TakeNoParams);
RUNTIME_PPC_JUMP_LABEL(.L_80102980, 0x80102980) //this is a jump label
/*80102980 000FF780*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80102984 000FF784*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80102988 000FF788*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF978 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010298C 000FF78C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80102990 000FF790*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*80102994 000FF794*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80102998 000FF798*/ PPC::Runtime::ASM::lfd(context->f4, STRUCT_DOUBLE_COUNT_1805DF980 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010299C 000FF79C*/ PPC::Runtime::ASM::fmr(context->f3, context->f2);
/*801029A0 000FF7A0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801029A4 000FF7A4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801029A8 000FF7A8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF988 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801029AC 000FF7AC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801029B0 000FF7B0*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801029B4 000FF7B4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801029B8 000FF7B8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f4);
/*801029BC 000FF7BC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801029C0 000FF7C0*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f0);
/*801029C4 000FF7C4*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*801029C8 000FF7C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*801029CC 000FF7CC*/ PPC::Runtime::ASM::b(.L_80102B10);
RUNTIME_PPC_JUMP_LABEL(.L_801029D0, 0x801029D0) //this is a jump label
/*801029D0 000FF7D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*801029D4 000FF7D4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r29));
/*801029D8 000FF7D8*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*801029DC 000FF7DC*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*801029E0 000FF7E0*/ PPC::Runtime::ASM::bge(.L_80102A90);
/*801029E4 000FF7E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*801029E8 000FF7E8*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 2);
/*801029EC 000FF7EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*801029F0 000FF7F0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r29));
/*801029F4 000FF7F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801029F8 000FF7F8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801029FC 000FF7FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80102A00 000FF800*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*80102A04 000FF804*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80102A08 000FF808*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80102A0C 000FF80C*/ PPC::Runtime::ASM::bne(.L_80102A90);
/*80102A10 000FF810*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x1);
/*80102A14 000FF814*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r29));
/*80102A18 000FF818*/ PPC::Runtime::ASM::b(.L_80102A28);
RUNTIME_PPC_JUMP_LABEL(.L_80102A1C, 0x80102A1C) //this is a jump label
/*80102A1C 000FF81C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r29));
/*80102A20 000FF820*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80102A24 000FF824*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80102A28, 0x80102A28) //this is a jump label
/*80102A28 000FF828*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r29));
/*80102A2C 000FF82C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*80102A30 000FF830*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 2);
/*80102A34 000FF834*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*80102A38 000FF838*/ PPC::Runtime::ASM::lfsx(context->f0, context->r4, context->r0);
/*80102A3C 000FF83C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80102A40 000FF840*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80102A44 000FF844*/ PPC::Runtime::ASM::beq(.L_80102A1C);
/*80102A48 000FF848*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r24));
/*80102A4C 000FF84C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80102A50 000FF850*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF978 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80102A54 000FF854*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80102A58 000FF858*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r3));
/*80102A5C 000FF85C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80102A60 000FF860*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80102A64 000FF864*/ PPC::Runtime::ASM::fmr(context->f3, context->f2);
/*80102A68 000FF868*/ PPC::Runtime::ASM::xoris(context->r5, context->r5, 0x8000);
/*80102A6C 000FF86C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80102A70 000FF870*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DF980 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80102A74 000FF874*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80102A78 000FF878*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80102A7C 000FF87C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80102A80 000FF880*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80102A84 000FF884*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*80102A88 000FF888*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80102A8C 000FF88C*/ PPC::Runtime::ASM::bl(fn_killWhispy);
RUNTIME_PPC_JUMP_LABEL(.L_80102A90, 0x80102A90) //this is a jump label
/*80102A90 000FF890*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r24));
/*80102A94 000FF894*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r29));
/*80102A98 000FF898*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80102A9C 000FF89C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80102AA0 000FF8A0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80102AA4 000FF8A4*/ PPC::Runtime::ASM::bne(.L_80102B0C);
/*80102AA8 000FF8A8*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*80102AAC 000FF8AC*/ PPC::Runtime::ASM::mr(context->r22, context->r27);
/*80102AB0 000FF8B0*/ PPC::Runtime::ASM::b(.L_80102AE0);
RUNTIME_PPC_JUMP_LABEL(.L_80102AB4, 0x80102AB4) //this is a jump label
/*80102AB4 000FF8B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80102AB8 000FF8B8*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80102ABC 000FF8BC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80102AC0 000FF8C0*/ PPC::Runtime::ASM::mr(context->r6, context->r26);
/*80102AC4 000FF8C4*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r22);
/*80102AC8 000FF8C8*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x8);
/*80102ACC 000FF8CC*/ PPC::Runtime::ASM::addi(context->r8, context->r25, 0x14);
/*80102AD0 000FF8D0*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80102AD4 000FF8D4*/ PPC::Runtime::ASM::bl(fn_800F7044);
/*80102AD8 000FF8D8*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x1c);
/*80102ADC 000FF8DC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80102AE0, 0x80102AE0) //this is a jump label
/*80102AE0 000FF8E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*80102AE4 000FF8E4*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*80102AE8 000FF8E8*/ PPC::Runtime::ASM::blt(.L_80102AB4);
/*80102AEC 000FF8EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r29));
/*80102AF0 000FF8F0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80102AF4 000FF8F4*/ PPC::Runtime::ASM::ble(.L_80102B04);
/*80102AF8 000FF8F8*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x118);
/*80102AFC 000FF8FC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80102B00 000FF900*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_80102B04, 0x80102B04) //this is a jump label
/*80102B04 000FF904*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*80102B08 000FF908*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80102B0C, 0x80102B0C) //this is a jump label
/*80102B0C 000FF90C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80102B10, 0x80102B10) //this is a jump label
/*80102B10 000FF910*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*80102B14 000FF914*/ PPC::Runtime::ASM::bl(_restgpr_22);
/*80102B18 000FF918*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80102B1C 000FF91C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80102B20 000FF920*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80102B24 000FF924*/ PPC::Runtime::ASM::blr();
}