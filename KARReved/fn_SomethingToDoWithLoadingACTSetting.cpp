//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmLoadData.hpp"
#include "fn_SomethingToDoWithStadiumsAndChoosingThem.hpp"
#include "fn_80040660.hpp"
#include "fn_80006EB8.hpp"



void fn_SomethingToDoWithLoadingACTSetting(PPC::Runtime::GCContext* context)
{
/*8003F988 0003C788*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003F98C 0003C78C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003F990 0003C790*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003F994 0003C794*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003F998 0003C798*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8003F99C 0003C79C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003F9A0 0003C7A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8003F9A4 0003C7A4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003F9A8 0003C7A8*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x394);
/*8003F9AC 0003C7AC*/ PPC::Runtime::ASM::bl(fn_gmLoadData);
/*8003F9B0 0003C7B0*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*8003F9B4 0003C7B4*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8003F9B8 0003C7B8*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xac8);
/*8003F9BC 0003C7BC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8003F9C0 0003C7C0*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8003F9C4, 0x8003F9C4) //this is a jump label
/*8003F9C4 0003C7C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r30));
/*8003F9C8 0003C7C8*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8003F9CC 0003C7CC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8003F9D0 0003C7D0*/ PPC::Runtime::ASM::beq(.L_8003FACC);
/*8003F9D4 0003C7D4*/ PPC::Runtime::ASM::bge(.L_8003F9E4);
/*8003F9D8 0003C7D8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8003F9DC 0003C7DC*/ PPC::Runtime::ASM::bge(.L_8003F9F0);
/*8003F9E0 0003C7E0*/ PPC::Runtime::ASM::b(.L_8003FB20);
RUNTIME_PPC_JUMP_LABEL(.L_8003F9E4, 0x8003F9E4) //this is a jump label
/*8003F9E4 0003C7E4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8003F9E8 0003C7E8*/ PPC::Runtime::ASM::bge(.L_8003FB20);
/*8003F9EC 0003C7EC*/ PPC::Runtime::ASM::b(.L_8003FAF8);
RUNTIME_PPC_JUMP_LABEL(.L_8003F9F0, 0x8003F9F0) //this is a jump label
/*8003F9F0 0003C7F0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8003F9F4 0003C7F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DE880 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8003F9F8 0003C7F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*8003F9FC 0003C7FC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE884 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8003FA00 0003C800*/ PPC::Runtime::ASM::beq(.L_8003FA0C);
/*8003FA04 0003C804*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8003FA08 0003C808*/ PPC::Runtime::ASM::b(.L_8003FA10);
RUNTIME_PPC_JUMP_LABEL(.L_8003FA0C, 0x8003FA0C) //this is a jump label
/*8003FA0C 0003C80C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8003FA10, 0x8003FA10) //this is a jump label
/*8003FA10 0003C810*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8003FA14 0003C814*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*8003FA18 0003C818*/ PPC::Runtime::ASM::beq(.L_8003FA24);
/*8003FA1C 0003C81C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8003FA20 0003C820*/ PPC::Runtime::ASM::b(.L_8003FA28);
RUNTIME_PPC_JUMP_LABEL(.L_8003FA24, 0x8003FA24) //this is a jump label
/*8003FA24 0003C824*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8003FA28, 0x8003FA28) //this is a jump label
/*8003FA28 0003C828*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8003FA2C 0003C82C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*8003FA30 0003C830*/ PPC::Runtime::ASM::beq(.L_8003FA3C);
/*8003FA34 0003C834*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8003FA38 0003C838*/ PPC::Runtime::ASM::b(.L_8003FA40);
RUNTIME_PPC_JUMP_LABEL(.L_8003FA3C, 0x8003FA3C) //this is a jump label
/*8003FA3C 0003C83C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8003FA40, 0x8003FA40) //this is a jump label
/*8003FA40 0003C840*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8003FA44 0003C844*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*8003FA48 0003C848*/ PPC::Runtime::ASM::beq(.L_8003FA54);
/*8003FA4C 0003C84C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8003FA50 0003C850*/ PPC::Runtime::ASM::b(.L_8003FA58);
RUNTIME_PPC_JUMP_LABEL(.L_8003FA54, 0x8003FA54) //this is a jump label
/*8003FA54 0003C854*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8003FA58, 0x8003FA58) //this is a jump label
/*8003FA58 0003C858*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*8003FA5C 0003C85C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*8003FA60 0003C860*/ PPC::Runtime::ASM::beq(.L_8003FA6C);
/*8003FA64 0003C864*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8003FA68 0003C868*/ PPC::Runtime::ASM::b(.L_8003FA70);
RUNTIME_PPC_JUMP_LABEL(.L_8003FA6C, 0x8003FA6C) //this is a jump label
/*8003FA6C 0003C86C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8003FA70, 0x8003FA70) //this is a jump label
/*8003FA70 0003C870*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8003FA74 0003C874*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*8003FA78 0003C878*/ PPC::Runtime::ASM::beq(.L_8003FA84);
/*8003FA7C 0003C87C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*8003FA80 0003C880*/ PPC::Runtime::ASM::b(.L_8003FA88);
RUNTIME_PPC_JUMP_LABEL(.L_8003FA84, 0x8003FA84) //this is a jump label
/*8003FA84 0003C884*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8003FA88, 0x8003FA88) //this is a jump label
/*8003FA88 0003C888*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*8003FA8C 0003C88C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*8003FA90 0003C890*/ PPC::Runtime::ASM::beq(.L_8003FA9C);
/*8003FA94 0003C894*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*8003FA98 0003C898*/ PPC::Runtime::ASM::b(.L_8003FAA0);
RUNTIME_PPC_JUMP_LABEL(.L_8003FA9C, 0x8003FA9C) //this is a jump label
/*8003FA9C 0003C89C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8003FAA0, 0x8003FAA0) //this is a jump label
/*8003FAA0 0003C8A0*/ PPC::Runtime::ASM::li(context->r0, 0x7);
/*8003FAA4 0003C8A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x8);
/*8003FAA8 0003C8A8*/ PPC::Runtime::ASM::beq(.L_8003FAB4);
/*8003FAAC 0003C8AC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8003FAB0 0003C8B0*/ PPC::Runtime::ASM::b(.L_8003FAC4);
RUNTIME_PPC_JUMP_LABEL(.L_8003FAB4, 0x8003FAB4) //this is a jump label
/*8003FAB4 0003C8B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8003FAB8 0003C8B8*/ PPC::Runtime::ASM::b(.L_8003FAC4);
/*8003FABC 0003C8BC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8003FAC0 0003C8C0*/ PPC::Runtime::ASM::b(.L_8003FB20);
RUNTIME_PPC_JUMP_LABEL(.L_8003FAC4, 0x8003FAC4) //this is a jump label
/*8003FAC4 0003C8C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8003FAC8 0003C8C8*/ PPC::Runtime::ASM::b(.L_8003FB20);
RUNTIME_PPC_JUMP_LABEL(.L_8003FACC, 0x8003FACC) //this is a jump label
/*8003FACC 0003C8CC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE884 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8003FAD0 0003C8D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8003FAD4 0003C8D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8003FAD8 0003C8D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8003FADC 0003C8DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8003FAE0 0003C8E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8003FAE4 0003C8E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*8003FAE8 0003C8E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*8003FAEC 0003C8EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8003FAF0 0003C8F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8003FAF4 0003C8F4*/ PPC::Runtime::ASM::b(.L_8003FB20);
RUNTIME_PPC_JUMP_LABEL(.L_8003FAF8, 0x8003FAF8) //this is a jump label
/*8003FAF8 0003C8F8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE884 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8003FAFC 0003C8FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8003FB00 0003C900*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8003FB04 0003C904*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8003FB08 0003C908*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8003FB0C 0003C90C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*8003FB10 0003C910*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*8003FB14 0003C914*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*8003FB18 0003C918*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8003FB1C 0003C91C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8003FB20, 0x8003FB20) //this is a jump label
/*8003FB20 0003C920*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8003FB24 0003C924*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8003FB28 0003C928*/ PPC::Runtime::ASM::beq(.L_8003FB44);
/*8003FB2C 0003C92C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/*8003FB30 0003C930*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r7);
/*8003FB34 0003C934*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r3));
/*8003FB38 0003C938*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r5));
/*8003FB3C 0003C93C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc5, context->r3));
/*8003FB40 0003C940*/ PPC::Runtime::ASM::b(.L_8003FB5C);
RUNTIME_PPC_JUMP_LABEL(.L_8003FB44, 0x8003FB44) //this is a jump label
/*8003FB44 0003C944*/ PPC::Runtime::ASM::add(context->r6, context->r30, context->r7);
/*8003FB48 0003C948*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8003FB4C 0003C94C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r6));
/*8003FB50 0003C950*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8003FB54 0003C954*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc5, context->r6));
/*8003FB58 0003C958*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_8003FB5C, 0x8003FB5C) //this is a jump label
/*8003FB5C 0003C95C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x24);
/*8003FB60 0003C960*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x30);
/*8003FB64 0003C964*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8003FB68 0003C968*/ PPC::Runtime::ASM::bdnz(.L_8003F9C4);
/*8003FB6C 0003C96C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8003FB70 0003C970*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8003FB74 0003C974*/ PPC::Runtime::ASM::bne(.L_8003FB7C);
/*8003FB78 0003C978*/ PPC::Runtime::ASM::bl(fn_SomethingToDoWithStadiumsAndChoosingThem);
RUNTIME_PPC_JUMP_LABEL(.L_8003FB7C, 0x8003FB7C) //this is a jump label
/*8003FB7C 0003C97C*/ PPC::Runtime::ASM::bl(fn_80040660);
/*8003FB80 0003C980*/ PPC::Runtime::ASM::bl(fn_80006EB8);
/*8003FB84 0003C984*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r30));
/*8003FB88 0003C988*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8003FB8C 0003C98C*/ PPC::Runtime::ASM::beq(.L_8003FC44);
/*8003FB90 0003C990*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*8003FB94 0003C994*/ PPC::Runtime::ASM::li(context->r0, 0x9);
/*8003FB98 0003C998*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r31));
/*8003FB9C 0003C99C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8003FBA0 0003C9A0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8003FBA4 0003C9A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa97, context->r31));
/*8003FBA8 0003C9A8*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa98, context->r31));
/*8003FBAC 0003C9AC*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa9a, context->r31));
/*8003FBB0 0003C9B0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*8003FBB4 0003C9B4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 4, 27, 27);
/*8003FBB8 0003C9B8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*8003FBBC 0003C9BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*8003FBC0 0003C9C0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 3, 28, 28);
/*8003FBC4 0003C9C4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*8003FBC8 0003C9C8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*8003FBCC 0003C9CC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 1, 29, 30);
/*8003FBD0 0003C9D0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*8003FBD4 0003C9D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*8003FBD8 0003C9D8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 0, 31, 31);
/*8003FBDC 0003C9DC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa5, context->r31));
/*8003FBE0 0003C9E0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*8003FBE4 0003C9E4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*8003FBE8 0003C9E8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*8003FBEC 0003C9EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa7, context->r31));
/*8003FBF0 0003C9F0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 3, 28, 28);
/*8003FBF4 0003C9F4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa7, context->r31));
/*8003FBF8 0003C9F8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r30));
/*8003FBFC 0003C9FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8003FC00 0003CA00*/ PPC::Runtime::ASM::bne(.L_8003FC44);
/*8003FC04 0003CA04*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*8003FC08 0003CA08*/ PPC::Runtime::ASM::li(context->r0, 0x34);
/*8003FC0C 0003CA0C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r31));
/*8003FC10 0003CA10*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa97, context->r31));
/*8003FC14 0003CA14*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*8003FC18 0003CA18*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*8003FC1C 0003CA1C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*8003FC20 0003CA20*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*8003FC24 0003CA24*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*8003FC28 0003CA28*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*8003FC2C 0003CA2C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*8003FC30 0003CA30*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 4, 27, 27);
/*8003FC34 0003CA34*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa6, context->r31));
/*8003FC38 0003CA38*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa7, context->r31));
/*8003FC3C 0003CA3C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*8003FC40 0003CA40*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xaa7, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8003FC44, 0x8003FC44) //this is a jump label
/*8003FC44 0003CA44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003FC48 0003CA48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003FC4C 0003CA4C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8003FC50 0003CA50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003FC54 0003CA54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003FC58 0003CA58*/ PPC::Runtime::ASM::blr();
}