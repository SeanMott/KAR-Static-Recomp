//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801E276C(PPC::Runtime::GCContext* context)
{
/*801E276C 001DF56C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801E2770 001DF570*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E2774 001DF574*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E2778 001DF578*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801E277C 001DF57C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801E2780 001DF580*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E2784 001DF584*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E2788 001DF588*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a0, context->r3));
/*801E278C 001DF58C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x324);
/*801E2790 001DF590*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ec, context->r31));
/*801E2794 001DF594*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb3c, context->r31));
/*801E2798 001DF598*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f1);
/*801E279C 001DF59C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f0);
/*801E27A0 001DF5A0*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801E27A4 001DF5A4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*801E27A8 001DF5A8*/ PPC::Runtime::ASM::bge(.L_801E27C0);
/*801E27AC 001DF5AC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1D04 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E27B0 001DF5B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801E27B4 001DF5B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801E27B8 001DF5B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801E27BC 001DF5BC*/ PPC::Runtime::ASM::b(.L_801E27F8);
RUNTIME_PPC_JUMP_LABEL(.L_801E27C0, 0x801E27C0) //this is a jump label
/*801E27C0 001DF5C0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1D20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E27C4 001DF5C4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801E27C8 001DF5C8*/ PPC::Runtime::ASM::ble(.L_801E27F8);
/*801E27CC 001DF5CC*/ PPC::Runtime::ASM::fneg(context->f0, context->f31);
/*801E27D0 001DF5D0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801E27D4 001DF5D4*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f1);
/*801E27D8 001DF5D8*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f2);
/*801E27DC 001DF5DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801E27E0 001DF5E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801E27E4 001DF5E4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f0, context->f1, context->f0);
/*801E27E8 001DF5E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801E27EC 001DF5EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801E27F0 001DF5F0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f0, context->f1, context->f0);
/*801E27F4 001DF5F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E27F8, 0x801E27F8) //this is a jump label
/*801E27F8 001DF5F8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801E27FC 001DF5FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801E2800 001DF600*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801E2804 001DF604*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E2808 001DF608*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E280C 001DF60C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801E2810 001DF610*/ PPC::Runtime::ASM::blr();
}