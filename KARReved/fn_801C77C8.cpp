//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C77C8(PPC::Runtime::GCContext* context)
{
/*801C77C8 001C45C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801C77CC 001C45CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C77D0 001C45D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801C77D4 001C45D4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801C77D8 001C45D8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801C77DC 001C45DC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C77E0 001C45E0*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*801C77E4 001C45E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C77E8 001C45E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r31));
/*801C77EC 001C45EC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801C77F0 001C45F0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801C77F4 001C45F4*/ PPC::Runtime::ASM::bne(.L_801C7808);
/*801C77F8 001C45F8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FB8 @ Get_MemoryOffset_SDA21);
/*801C77FC 001C45FC*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*801C7800 001C4600*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FC0 @ Get_MemoryOffset_SDA21);
/*801C7804 001C4604*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C7808, 0x801C7808) //this is a jump label
/*801C7808 001C4608*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*801C780C 001C460C*/ PPC::Runtime::ASM::beq(.L_801C7850);
/*801C7810 001C4610*/ PPC::Runtime::ASM::bne(.L_801C7824);
/*801C7814 001C4614*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6FB8 @ Get_MemoryOffset_SDA21);
/*801C7818 001C4618*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801C781C 001C461C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6FC0 @ Get_MemoryOffset_SDA21);
/*801C7820 001C4620*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801C7824, 0x801C7824) //this is a jump label
/*801C7824 001C4624*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801C7828 001C4628*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801C782C 001C462C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801C7830 001C4630*/ PPC::Runtime::ASM::bne(.L_801C7840);
/*801C7834 001C4634*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801C7838 001C4638*/ PPC::Runtime::ASM::beq(.L_801C7840);
/*801C783C 001C463C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801C7840, 0x801C7840) //this is a jump label
/*801C7840 001C4640*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C7844 001C4644*/ PPC::Runtime::ASM::beq(.L_801C7850);
/*801C7848 001C4648*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801C784C 001C464C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_801C7850, 0x801C7850) //this is a jump label
/*801C7850 001C4650*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*801C7854 001C4654*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x44);
/*801C7858 001C4658*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x828);
/*801C785C 001C465C*/ PPC::Runtime::ASM::bl(fn_PSMTXMultVec);
/*801C7860 001C4660*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801C7864 001C4664*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801C7868 001C4668*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801C786C 001C466C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C7870 001C4670*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C7874 001C4674*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801C7878 001C4678*/ PPC::Runtime::ASM::blr();
}