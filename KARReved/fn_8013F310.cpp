//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8013F310(PPC::Runtime::GCContext* context)
{
/*8013F310 0013C110*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8013F314 0013C114*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013F318 0013C118*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8013F31C 0013C11C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8013F320 0013C120*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8013F324 0013C124*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8013F328 0013C128*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8013F32C 0013C12C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8013F330 0013C130*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8013F334 0013C134*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8013F338 0013C138*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013F33C 0013C13C*/ PPC::Runtime::ASM::beq(.L_8013F34C);
/*8013F340 0013C140*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8013F344 0013C144*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013F348 0013C148*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8013F34C, 0x8013F34C) //this is a jump label
/*8013F34C 0013C14C*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8013F350 0013C150*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8013F354 0013C154*/ PPC::Runtime::ASM::beq(.L_8013F450);
/*8013F358 0013C158*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8013F35C 0013C15C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8013F360 0013C160*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0350 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F364 0013C164*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0354 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F368 0013C168*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E01A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F36C 0013C16C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E0358 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F370 0013C170*/ PPC::Runtime::ASM::lfs(context->f5, STRUCT_FLOAT_COUNT_1805E035C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F374 0013C174*/ PPC::Runtime::ASM::bl(fn_8044F128);
/*8013F378 0013C178*/ PPC::Runtime::ASM::extsb(context->r4, context->r29);
/*8013F37C 0013C17C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8013F380 0013C180*/ PPC::Runtime::ASM::bl(fn_8044F9D4);
/*8013F384 0013C184*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8013F388 0013C188*/ PPC::Runtime::ASM::lis(context->r5, 0x4330);
/*8013F38C 0013C18C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8013F390 0013C190*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0350 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F394 0013C194*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8013F398 0013C198*/ PPC::Runtime::ASM::xoris(context->r6, context->r3, 0x8000);
/*8013F39C 0013C19C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013F3A0 0013C1A0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013F3A4 0013C1A4*/ PPC::Runtime::ASM::lfd(context->f7, STRUCT_DOUBLE_COUNT_1805E01B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F3A8 0013C1A8*/ PPC::Runtime::ASM::extsb(context->r4, context->r29);
/*8013F3AC 0013C1AC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8013F3B0 0013C1B0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0360 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F3B4 0013C1B4*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8013F3B8 0013C1B8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8013F3BC 0013C1BC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f7);
/*8013F3C0 0013C1C0*/ PPC::Runtime::ASM::lfs(context->f6, STRUCT_FLOAT_COUNT_1805E02B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F3C4 0013C1C4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8013F3C8 0013C1C8*/ PPC::Runtime::ASM::lfs(context->f5, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F3CC 0013C1CC*/ PPC::Runtime::ASM::lfd(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8013F3D0 0013C1D0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*8013F3D4 0013C1D4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8013F3D8 0013C1D8*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f7);
/*8013F3DC 0013C1DC*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E0364 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F3E0 0013C1E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8013F3E4 0013C1E4*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E01A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F3E8 0013C1E8*/ PPC::Runtime::ASM::fmadds(context->f1, context->f6, context->f2, context->f1);
/*8013F3EC 0013C1EC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8013F3F0 0013C1F0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0358 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F3F4 0013C1F4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E01AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013F3F8 0013C1F8*/ PPC::Runtime::ASM::fctiwz(context->f1, context->f1);
/*8013F3FC 0013C1FC*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8013F400 0013C200*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8013F404 0013C204*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8013F408 0013C208*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8013F40C 0013C20C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8013F410 0013C210*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8013F414 0013C214*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8013F418 0013C218*/ PPC::Runtime::ASM::fsubs(context->f6, context->f1, context->f7);
/*8013F41C 0013C21C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8013F420 0013C220*/ PPC::Runtime::ASM::fnmsubs(context->f4, context->f6, context->f5, context->f4);
/*8013F424 0013C224*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f7);
/*8013F428 0013C228*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8013F42C 0013C22C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8013F430 0013C230*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8013F434 0013C234*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8013F438 0013C238*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8013F43C 0013C23C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8013F440 0013C240*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*8013F444 0013C244*/ PPC::Runtime::ASM::bl(fn_8044F8C8);
/*8013F448 0013C248*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013F44C 0013C24C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8013F450, 0x8013F450) //this is a jump label
/*8013F450 0013C250*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8013F454 0013C254*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8013F458 0013C258*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8013F45C 0013C25C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8013F460 0013C260*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013F464 0013C264*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8013F468 0013C268*/ PPC::Runtime::ASM::blr();
}