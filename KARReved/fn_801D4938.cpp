//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801D4938(PPC::Runtime::GCContext* context)
{
/*801D4938 001D1738*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801D493C 001D173C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D4940 001D1740*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801D4944 001D1744*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801D4948 001D1748*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801D494C 001D174C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D4950 001D1750*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D4954 001D1754*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801D4958 001D1758*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D495C 001D175C*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*801D4960 001D1760*/ PPC::Runtime::ASM::mr(context->r31, context->r29);
/*801D4964 001D1764*/ PPC::Runtime::ASM::b(.L_801D4994);
RUNTIME_PPC_JUMP_LABEL(.L_801D4968, 0x801D4968) //this is a jump label
/*801D4968 001D1768*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*801D496C 001D176C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801D4970 001D1770*/ PPC::Runtime::ASM::beq(.L_801D498C);
/*801D4974 001D1774*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r31));
/*801D4978 001D1778*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801D497C 001D177C*/ PPC::Runtime::ASM::beq(.L_801D498C);
/*801D4980 001D1780*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801D4984 001D1784*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801D4988 001D1788*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
RUNTIME_PPC_JUMP_LABEL(.L_801D498C, 0x801D498C) //this is a jump label
/*801D498C 001D178C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*801D4990 001D1790*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801D4994, 0x801D4994) //this is a jump label
/*801D4994 001D1794*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*801D4998 001D1798*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*801D499C 001D179C*/ PPC::Runtime::ASM::blt(.L_801D4968);
/*801D49A0 001D17A0*/ PPC::Runtime::ASM::mr(context->r31, context->r29);
/*801D49A4 001D17A4*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801D49A8 001D17A8*/ PPC::Runtime::ASM::b(.L_801D49D8);
RUNTIME_PPC_JUMP_LABEL(.L_801D49AC, 0x801D49AC) //this is a jump label
/*801D49AC 001D17AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15c, context->r31));
/*801D49B0 001D17B0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801D49B4 001D17B4*/ PPC::Runtime::ASM::beq(.L_801D49D0);
/*801D49B8 001D17B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r31));
/*801D49BC 001D17BC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801D49C0 001D17C0*/ PPC::Runtime::ASM::beq(.L_801D49D0);
/*801D49C4 001D17C4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*801D49C8 001D17C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r3));
/*801D49CC 001D17CC*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
RUNTIME_PPC_JUMP_LABEL(.L_801D49D0, 0x801D49D0) //this is a jump label
/*801D49D0 001D17D0*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*801D49D4 001D17D4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801D49D8, 0x801D49D8) //this is a jump label
/*801D49D8 001D17D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*801D49DC 001D17DC*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*801D49E0 001D17E0*/ PPC::Runtime::ASM::blt(.L_801D49AC);
/*801D49E4 001D17E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801D49E8 001D17E8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801D49EC 001D17EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D49F0 001D17F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D49F4 001D17F4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D49F8 001D17F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D49FC 001D17FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801D4A00 001D1800*/ PPC::Runtime::ASM::blr();
}