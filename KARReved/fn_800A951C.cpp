//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800A951C(PPC::Runtime::GCContext* context)
{
/*800A951C 000A631C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800A9520 000A6320*/ PPC::Runtime::ASM::mflr(context->r0);
/*800A9524 000A6324*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800A9528 000A6328*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800A952C 000A632C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*800A9530 000A6330*/ PPC::Runtime::ASM::lis(context->r6, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800A9534 000A6334*/ PPC::Runtime::ASM::lis(context->r5, StructWithFuncPtrs_25 @ Get_MemoryOffset_HighBit);
/*800A9538 000A6338*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800A953C 000A633C*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*800A9540 000A6340*/ PPC::Runtime::ASM::addi(context->r30, context->r6, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800A9544 000A6344*/ PPC::Runtime::ASM::addi(context->r31, context->r5, StructWithFuncPtrs_25 @ Get_MemoryOffset_LowBit);
/*800A9548 000A6348*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800A954C 000A634C*/ PPC::Runtime::ASM::b(.L_800A9574);
RUNTIME_PPC_JUMP_LABEL(.L_800A9550, 0x800A9550) //this is a jump label
/*800A9550 000A6350*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f34, context->r30));
/*800A9554 000A6354*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800A9558 000A6358*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*800A955C 000A635C*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*800A9560 000A6360*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800A9564 000A6364*/ PPC::Runtime::ASM::lwzx(context->r12, context->r31, context->r0);
/*800A9568 000A6368*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800A956C 000A636C*/ PPC::Runtime::ASM::bctrl();
/*800A9570 000A6370*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800A9574, 0x800A9574) //this is a jump label
/*800A9574 000A6374*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x454, context->r29));
/*800A9578 000A6378*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800A957C 000A637C*/ PPC::Runtime::ASM::beq(.L_800A9588);
/*800A9580 000A6380*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A9584 000A6384*/ PPC::Runtime::ASM::b(.L_800A958C);
RUNTIME_PPC_JUMP_LABEL(.L_800A9588, 0x800A9588) //this is a jump label
/*800A9588 000A6388*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800A958C, 0x800A958C) //this is a jump label
/*800A958C 000A638C*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*800A9590 000A6390*/ PPC::Runtime::ASM::blt(.L_800A9550);
/*800A9594 000A6394*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800A9598 000A6398*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800A959C 000A639C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800A95A0 000A63A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800A95A4 000A63A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800A95A8 000A63A8*/ PPC::Runtime::ASM::blr();
}