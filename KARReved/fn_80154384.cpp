//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800547E0.hpp"
#include "fn_80138B10.hpp"
#include "fn_80138B10.hpp"
#include "fn_800550F4.hpp"
#include "fn_80138C1C.hpp"



void fn_80154384(PPC::Runtime::GCContext* context)
{
/*80154384 00151184*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80154388 00151188*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015438C 0015118C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80154390 00151190*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80154394 00151194*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80154398 00151198*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015439C 0015119C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801543A0 001511A0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801543A4 001511A4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*801543A8 001511A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801543AC 001511AC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*801543B0 001511B0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801543B4 001511B4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*801543B8 001511B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r29));
/*801543BC 001511BC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*801543C0 001511C0*/ PPC::Runtime::ASM::bne(.L_8015444C);
/*801543C4 001511C4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801543C8 001511C8*/ PPC::Runtime::ASM::bl(fn_800547E0);
/*801543CC 001511CC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801543D0 001511D0*/ PPC::Runtime::ASM::bne(.L_8015444C);
/*801543D4 001511D4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801543D8 001511D8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r29));
/*801543DC 001511DC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*801543E0 001511E0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801543E4 001511E4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*801543E8 001511E8*/ PPC::Runtime::ASM::blt(.L_8015440C);
/*801543EC 001511EC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x600, context->r31));
/*801543F0 001511F0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801543F4 001511F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0750 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801543F8 001511F8*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*801543FC 001511FC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80154400 00151200*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0754 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80154404 00151204*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80154408 00151208*/ PPC::Runtime::ASM::b(.L_80154428);
RUNTIME_PPC_JUMP_LABEL(.L_8015440C, 0x8015440C) //this is a jump label
/*8015440C 0015120C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x600, context->r31));
/*80154410 00151210*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80154414 00151214*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0750 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80154418 00151218*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8015441C 0015121C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80154420 00151220*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0754 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80154424 00151224*/ PPC::Runtime::ASM::bl(fn_80138B10);
RUNTIME_PPC_JUMP_LABEL(.L_80154428, 0x80154428) //this is a jump label
/*80154428 00151228*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*8015442C 0015122C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80154430 00151230*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80154434 00151234*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*80154438 00151238*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8015443C 0015123C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*80154440 00151240*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0750 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80154444 00151244*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*80154448 00151248*/ PPC::Runtime::ASM::bl(fn_80138C1C);
RUNTIME_PPC_JUMP_LABEL(.L_8015444C, 0x8015444C) //this is a jump label
/*8015444C 0015124C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80154450 00151250*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80154454 00151254*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80154458 00151258*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015445C 0015125C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80154460 00151260*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80154464 00151264*/ PPC::Runtime::ASM::blr();
}