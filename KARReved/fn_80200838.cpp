//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802369E0.hpp"
#include "fn_802369F0.hpp"



void fn_80200838(PPC::Runtime::GCContext* context)
{
/*80200838 001FD638*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8020083C 001FD63C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80200840 001FD640*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80200844 001FD644*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80200848 001FD648*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8020084C 001FD64C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80200850 001FD650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80200854 001FD654*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80200858 001FD658*/ PPC::Runtime::ASM::beq(.L_80200B8C);
/*8020085C 001FD65C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*80200860 001FD660*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa3c, context->r27));
/*80200864 001FD664*/ PPC::Runtime::ASM::bl(fn_802369E0);
/*80200868 001FD668*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8020086C 001FD66C*/ PPC::Runtime::ASM::beq(.L_80200B78);
/*80200870 001FD670*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80200874 001FD674*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80200878 001FD678*/ PPC::Runtime::ASM::beq(.L_80200B78);
/*8020087C 001FD67C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjInitEndCallBack);
/*80200880 001FD680*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80200884 001FD684*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80200888 001FD688*/ PPC::Runtime::ASM::b(.L_80200A54);
RUNTIME_PPC_JUMP_LABEL(.L_8020088C, 0x8020088C) //this is a jump label
/*8020088C 001FD68C*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x1);
/*80200890 001FD690*/ PPC::Runtime::ASM::bne(.L_80200A40);
/*80200894 001FD694*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/* 80200898 001FD698  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*8020089C 001FD69C*/ PPC::Runtime::ASM::beq(.L_80200A40);
/*802008A0 001FD6A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r27));
/*802008A4 001FD6A4*/ PPC::Runtime::ASM::lwzx(context->r31, context->r3, context->r30);
/*802008A8 001FD6A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802008AC 001FD6AC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*802008B0 001FD6B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r27));
/*802008B4 001FD6B4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802008B8 001FD6B8*/ PPC::Runtime::ASM::beq(.L_80200A4C);
/*802008BC 001FD6BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802008C0 001FD6C0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802008C4 001FD6C4*/ PPC::Runtime::ASM::beq(.L_80200A4C);
/*802008C8 001FD6C8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/* 802008CC 001FD6CC  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*802008D0 001FD6D0*/ PPC::Runtime::ASM::beq(.L_80200A4C);
/*802008D4 001FD6D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x538, context->r27));
/*802008D8 001FD6D8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*802008DC 001FD6DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x53c, context->r27));
/*802008E0 001FD6E0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x544, context->r27));
/*802008E4 001FD6E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x548, context->r27));
/*802008E8 001FD6E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x540, context->r27));
/*802008EC 001FD6EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54c, context->r27));
/*802008F0 001FD6F0*/ PPC::Runtime::ASM::bne(.L_80200904);
/*802008F4 001FD6F4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D710C @ Get_MemoryOffset_SDA21);
/*802008F8 001FD6F8*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*802008FC 001FD6FC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7114 @ Get_MemoryOffset_SDA21);
/*80200900 001FD700*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80200904, 0x80200904) //this is a jump label
/*80200904 001FD704*/ PPC::Runtime::ASM::addic.(context->r0, context->r27, 0x538);
/*80200908 001FD708*/ PPC::Runtime::ASM::bne(.L_80200920);
/*8020090C 001FD70C*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1329 @ Get_MemoryOffset_HighBit);
/*80200910 001FD710*/ PPC::Runtime::ASM::li(context->r3, lbl_805D710C @ Get_MemoryOffset_SDA21);
/*80200914 001FD714*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1329 @ Get_MemoryOffset_LowBit);
/*80200918 001FD718*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*8020091C 001FD71C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80200920, 0x80200920) //this is a jump label
/*80200920 001FD720*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80200924 001FD724*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80200928 001FD728*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8020092C 001FD72C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x538, context->r27));
/*80200930 001FD730*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x53c, context->r27));
/*80200934 001FD734*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80200938 001FD738*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x540, context->r27));
/*8020093C 001FD73C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r27));
/*80200940 001FD740*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x538, context->r27));
/*80200944 001FD744*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80200948 001FD748*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x538, context->r27));
/*8020094C 001FD74C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x53c, context->r27));
/*80200950 001FD750*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80200954 001FD754*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x53c, context->r27));
/*80200958 001FD758*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x540, context->r27));
/*8020095C 001FD75C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80200960 001FD760*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x540, context->r27));
/*80200964 001FD764*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x538, context->r27));
/*80200968 001FD768*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x544, context->r27));
/*8020096C 001FD76C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*80200970 001FD770*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x550, context->r27));
/*80200974 001FD774*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x53c, context->r27));
/*80200978 001FD778*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x548, context->r27));
/*8020097C 001FD77C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*80200980 001FD780*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x554, context->r27));
/*80200984 001FD784*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x540, context->r27));
/*80200988 001FD788*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54c, context->r27));
/*8020098C 001FD78C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*80200990 001FD790*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x558, context->r27));
/*80200994 001FD794*/ PPC::Runtime::ASM::bne(.L_802009A8);
/*80200998 001FD798*/ PPC::Runtime::ASM::li(context->r3, lbl_805D710C @ Get_MemoryOffset_SDA21);
/*8020099C 001FD79C*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*802009A0 001FD7A0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7114 @ Get_MemoryOffset_SDA21);
/*802009A4 001FD7A4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802009A8, 0x802009A8) //this is a jump label
/*802009A8 001FD7A8*/ PPC::Runtime::ASM::lis(context->r3, RandomBlobStuff_1 @ Get_MemoryOffset_HighBit);
/*802009AC 001FD7AC*/ PPC::Runtime::ASM::addic.(context->r0, context->r3, RandomBlobStuff_1 @ Get_MemoryOffset_LowBit);
/*802009B0 001FD7B0*/ PPC::Runtime::ASM::bne(.L_802009C8);
/*802009B4 001FD7B4*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1329 @ Get_MemoryOffset_HighBit);
/*802009B8 001FD7B8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D710C @ Get_MemoryOffset_SDA21);
/*802009BC 001FD7BC*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1329 @ Get_MemoryOffset_LowBit);
/*802009C0 001FD7C0*/ PPC::Runtime::ASM::li(context->r4, 0x3aa);
/*802009C4 001FD7C4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802009C8, 0x802009C8) //this is a jump label
/*802009C8 001FD7C8*/ PPC::Runtime::ASM::lis(context->r3, RandomBlobStuff_1 @ Get_MemoryOffset_HighBit);
/*802009CC 001FD7CC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, RandomBlobStuff_1 @ Get_MemoryOffset_LowBit);
/*802009D0 001FD7D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802009D4 001FD7D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802009D8 001FD7D8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*802009DC 001FD7DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*802009E0 001FD7E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802009E4 001FD7E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*802009E8 001FD7E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*802009EC 001FD7EC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*802009F0 001FD7F0*/ PPC::Runtime::ASM::bne(.L_80200A4C);
/*802009F4 001FD7F4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*802009F8 001FD7F8*/ PPC::Runtime::ASM::beq(.L_80200A4C);
/*802009FC 001FD7FC*/ PPC::Runtime::ASM::bne(.L_80200A10);
/*80200A00 001FD800*/ PPC::Runtime::ASM::li(context->r3, lbl_805D710C @ Get_MemoryOffset_SDA21);
/*80200A04 001FD804*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80200A08 001FD808*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7114 @ Get_MemoryOffset_SDA21);
/*80200A0C 001FD80C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80200A10, 0x80200A10) //this is a jump label
/*80200A10 001FD810*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80200A14 001FD814*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80200A18 001FD818*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80200A1C 001FD81C*/ PPC::Runtime::ASM::bne(.L_80200A2C);
/*80200A20 001FD820*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80200A24 001FD824*/ PPC::Runtime::ASM::beq(.L_80200A2C);
/*80200A28 001FD828*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80200A2C, 0x80200A2C) //this is a jump label
/*80200A2C 001FD82C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80200A30 001FD830*/ PPC::Runtime::ASM::bne(.L_80200A4C);
/*80200A34 001FD834*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80200A38 001FD838*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
/*80200A3C 001FD83C*/ PPC::Runtime::ASM::b(.L_80200A4C);
RUNTIME_PPC_JUMP_LABEL(.L_80200A40, 0x80200A40) //this is a jump label
/*80200A40 001FD840*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r27));
/*80200A44 001FD844*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r30);
/*80200A48 001FD848*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
RUNTIME_PPC_JUMP_LABEL(.L_80200A4C, 0x80200A4C) //this is a jump label
/*80200A4C 001FD84C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*80200A50 001FD850*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80200A54, 0x80200A54) //this is a jump label
/*80200A54 001FD854*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80200A58 001FD858*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80200A5C 001FD85C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80200A60 001FD860*/ PPC::Runtime::ASM::cmplw(context->r28, context->r0);
/*80200A64 001FD864*/ PPC::Runtime::ASM::blt(.L_8020088C);
/*80200A68 001FD868*/ PPC::Runtime::ASM::bl(fn_HSD_AObjInvokeCallBacks);
/*80200A6C 001FD86C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/* 80200A70 001FD870  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*80200A74 001FD874*/ PPC::Runtime::ASM::beq(.L_80200B04);
/*80200A78 001FD878*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80200A7C 001FD87C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80200A80 001FD880*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80200A84 001FD884*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80200A88 001FD888*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80200A8C 001FD88C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80200A90 001FD890*/ PPC::Runtime::ASM::ble(.L_80200ACC);
RUNTIME_PPC_JUMP_LABEL(.L_80200A94, 0x80200A94) //this is a jump label
/*80200A94 001FD894*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r27));
/*80200A98 001FD898*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r4);
/*80200A9C 001FD89C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80200AA0 001FD8A0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80200AA4 001FD8A4*/ PPC::Runtime::ASM::beq(.L_80200AC4);
/*80200AA8 001FD8A8*/ PPC::Runtime::ASM::bne(.L_80200ABC);
/*80200AAC 001FD8AC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D70F8 @ Get_MemoryOffset_SDA21);
/*80200AB0 001FD8B0*/ PPC::Runtime::ASM::li(context->r4, 0x95);
/*80200AB4 001FD8B4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7100 @ Get_MemoryOffset_SDA21);
/*80200AB8 001FD8B8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80200ABC, 0x80200ABC) //this is a jump label
/*80200ABC 001FD8BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80200AC0 001FD8C0*/ PPC::Runtime::ASM::b(.L_80200AE4);
RUNTIME_PPC_JUMP_LABEL(.L_80200AC4, 0x80200AC4) //this is a jump label
/*80200AC4 001FD8C4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*80200AC8 001FD8C8*/ PPC::Runtime::ASM::bdnz(.L_80200A94);
RUNTIME_PPC_JUMP_LABEL(.L_80200ACC, 0x80200ACC) //this is a jump label
/*80200ACC 001FD8CC*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1328 @ Get_MemoryOffset_HighBit);
/*80200AD0 001FD8D0*/ PPC::Runtime::ASM::li(context->r4, 0x24);
/*80200AD4 001FD8D4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1328 @ Get_MemoryOffset_LowBit);
/*80200AD8 001FD8D8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7108 @ Get_MemoryOffset_SDA21);
/*80200ADC 001FD8DC*/ PPC::Runtime::ASM::bl(fn___assert);
/*80200AE0 001FD8E0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2288 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80200AE4, 0x80200AE4) //this is a jump label
/*80200AE4 001FD8E4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r27));
/*80200AE8 001FD8E8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*80200AEC 001FD8EC*/ PPC::Runtime::ASM::bge(.L_80200B04);
/*80200AF0 001FD8F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r27));
/*80200AF4 001FD8F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ac, context->r27));
/*80200AF8 001FD8F8*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*80200AFC 001FD8FC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80200B00 001FD900*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ac, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_80200B04, 0x80200B04) //this is a jump label
/*80200B04 001FD904*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*80200B08 001FD908*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80200B0C 001FD90C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80200B10 001FD910*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80200B14 001FD914*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80200B18 001FD918*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80200B1C 001FD91C*/ PPC::Runtime::ASM::ble(.L_80200B58);
RUNTIME_PPC_JUMP_LABEL(.L_80200B20, 0x80200B20) //this is a jump label
/*80200B20 001FD920*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r27));
/*80200B24 001FD924*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r4);
/*80200B28 001FD928*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*80200B2C 001FD92C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80200B30 001FD930*/ PPC::Runtime::ASM::beq(.L_80200B50);
/*80200B34 001FD934*/ PPC::Runtime::ASM::bne(.L_80200B48);
/*80200B38 001FD938*/ PPC::Runtime::ASM::li(context->r3, lbl_805D70F8 @ Get_MemoryOffset_SDA21);
/*80200B3C 001FD93C*/ PPC::Runtime::ASM::li(context->r4, 0x95);
/*80200B40 001FD940*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7100 @ Get_MemoryOffset_SDA21);
/*80200B44 001FD944*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80200B48, 0x80200B48) //this is a jump label
/*80200B48 001FD948*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80200B4C 001FD94C*/ PPC::Runtime::ASM::b(.L_80200B70);
RUNTIME_PPC_JUMP_LABEL(.L_80200B50, 0x80200B50) //this is a jump label
/*80200B50 001FD950*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*80200B54 001FD954*/ PPC::Runtime::ASM::bdnz(.L_80200B20);
RUNTIME_PPC_JUMP_LABEL(.L_80200B58, 0x80200B58) //this is a jump label
/*80200B58 001FD958*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1328 @ Get_MemoryOffset_HighBit);
/*80200B5C 001FD95C*/ PPC::Runtime::ASM::li(context->r4, 0x24);
/*80200B60 001FD960*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1328 @ Get_MemoryOffset_LowBit);
/*80200B64 001FD964*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7108 @ Get_MemoryOffset_SDA21);
/*80200B68 001FD968*/ PPC::Runtime::ASM::bl(fn___assert);
/*80200B6C 001FD96C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2288 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80200B70, 0x80200B70) //this is a jump label
/*80200B70 001FD970*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r27));
/*80200B74 001FD974*/ PPC::Runtime::ASM::b(.L_80200B88);
RUNTIME_PPC_JUMP_LABEL(.L_80200B78, 0x80200B78) //this is a jump label
/*80200B78 001FD978*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r27));
/*80200B7C 001FD97C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r27));
/*80200B80 001FD980*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80200B84 001FD984*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a8, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_80200B88, 0x80200B88) //this is a jump label
/*80200B88 001FD988*/ PPC::Runtime::ASM::bl(fn_802369F0);
RUNTIME_PPC_JUMP_LABEL(.L_80200B8C, 0x80200B8C) //this is a jump label
/*80200B8C 001FD98C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80200B90 001FD990*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80200B94 001FD994*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80200B98 001FD998*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80200B9C 001FD99C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80200BA0 001FD9A0*/ PPC::Runtime::ASM::blr();
}