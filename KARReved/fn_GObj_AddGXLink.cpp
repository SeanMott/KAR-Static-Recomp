//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn_80429464.hpp"



void fn_GObj_AddGXLink(PPC::Runtime::GCContext* context)
{
/*80429690 00426490*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80429694 00426494*/ PPC::Runtime::ASM::mflr(context->r0);
/*80429698 00426498*/ PPC::Runtime::ASM::lis(context->r7, STRUCT_BYTE4_COUNT_18058C190 @ Get_MemoryOffset_HighBit);
/*8042969C 0042649C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804296A0 004264A0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804296A4 004264A4*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*804296A8 004264A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804296AC 004264AC*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*804296B0 004264B0*/ PPC::Runtime::ASM::addi(context->r5, context->r7, STRUCT_BYTE4_COUNT_18058C190 @ Get_MemoryOffset_LowBit);
/*804296B4 004264B4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804296B8 004264B8*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*804296BC 004264BC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804296C0 004264C0*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*804296C4 004264C4*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r30, 24);
/*804296C8 004264C8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r5));
/*804296CC 004264CC*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*804296D0 004264D0*/ PPC::Runtime::ASM::ble(.L_804296EC);
/*804296D4 004264D4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504E10 @ Get_MemoryOffset_HighBit);
/*804296D8 004264D8*/ PPC::Runtime::ASM::lis(context->r5, lbl_80504E20 @ Get_MemoryOffset_HighBit);
/*804296DC 004264DC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80504E10 @ Get_MemoryOffset_LowBit);
/*804296E0 004264E0*/ PPC::Runtime::ASM::li(context->r4, 0xa7);
/*804296E4 004264E4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_80504E20 @ Get_MemoryOffset_LowBit);
/*804296E8 004264E8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_804296EC, 0x804296EC) //this is a jump label
/*804296EC 004264EC*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*804296F0 004264F0*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*804296F4 004264F4*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*804296F8 004264F8*/ PPC::Runtime::ASM::mr(context->r7, context->r31);
/*804296FC 004264FC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80429700 00426500*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80429704 00426504*/ PPC::Runtime::ASM::bl(fn_80429464);
/*80429708 00426508*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8042970C 0042650C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80429710 00426510*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80429714 00426514*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80429718 00426518*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8042971C 0042651C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80429720 00426520*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80429724 00426524*/ PPC::Runtime::ASM::blr();
}