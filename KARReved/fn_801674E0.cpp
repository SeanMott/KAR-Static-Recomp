//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_800547E0.hpp"
#include "fn_80138B10.hpp"
#include "fn_800550F4.hpp"



void fn_801674E0(PPC::Runtime::GCContext* context)
{
/*801674E0 001642E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801674E4 001642E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801674E8 001642E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801674EC 001642EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801674F0 001642F0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801674F4 001642F4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801674F8 001642F8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801674FC 001642FC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80167500 00164300*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80167504 00164304*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80167508 00164308*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8016750C 0016430C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80167510 00164310*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80167514 00164314*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80167518 00164318*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8016751C 0016431C*/ PPC::Runtime::ASM::bne(.L_80167564);
/*80167520 00164320*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80167524 00164324*/ PPC::Runtime::ASM::bl(fn_800547E0);
/*80167528 00164328*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8016752C 0016432C*/ PPC::Runtime::ASM::bne(.L_80167564);
/*80167530 00164330*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80167534 00164334*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0A88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80167538 00164338*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8016753C 0016433C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80167540 00164340*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0A8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80167544 00164344*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80167548 00164348*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa48, context->r31));
/*8016754C 0016434C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80167550 00164350*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80167554 00164354*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80167558 00164358*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8016755C 0016435C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80167560 00164360*/ PPC::Runtime::ASM::bl(fn_800550F4);
RUNTIME_PPC_JUMP_LABEL(.L_80167564, 0x80167564) //this is a jump label
/*80167564 00164364*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80167568 00164368*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016756C 0016436C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80167570 00164370*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80167574 00164374*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80167578 00164378*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016757C 0016437C*/ PPC::Runtime::ASM::blr();
}