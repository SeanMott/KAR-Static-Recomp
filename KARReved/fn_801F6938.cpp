//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CC660.hpp"



void fn_801F6938(PPC::Runtime::GCContext* context)
{
/*801F6938 001F3738*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*801F693C 001F373C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F6940 001F3740*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801F6944 001F3744*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801F6948 001F3748*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801F694C 001F374C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801F6950 001F3750*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801F6954 001F3754*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801F6958 001F3758*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801F695C 001F375C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F6960 001F3760*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f0, context->r3));
/*801F6964 001F3764*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*801F6968 001F3768*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a0, context->r3));
/*801F696C 001F376C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F6970 001F3770*/ PPC::Runtime::ASM::fadds(context->f5, context->f4, context->f5);
/*801F6974 001F3774*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E20B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F6978 001F3778*/ PPC::Runtime::ASM::fadds(context->f31, context->f6, context->f5);
/*801F697C 001F377C*/ PPC::Runtime::ASM::fdivs(context->f30, context->f2, context->f31);
/*801F6980 001F3780*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*801F6984 001F3784*/ PPC::Runtime::ASM::ble(.L_801F698C);
/*801F6988 001F3788*/ PPC::Runtime::ASM::fmr(context->f30, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801F698C, 0x801F698C) //this is a jump label
/*801F698C 001F378C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E20C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F6990 001F3790*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f4);
/*801F6994 001F3794*/ PPC::Runtime::ASM::ble(.L_801F69AC);
/*801F6998 001F3798*/ PPC::Runtime::ASM::fsubs(context->f0, context->f30, context->f4);
/*801F699C 001F379C*/ PPC::Runtime::ASM::fmr(context->f2, context->f3);
/*801F69A0 001F37A0*/ PPC::Runtime::ASM::fdivs(context->f30, context->f0, context->f4);
/*801F69A4 001F37A4*/ PPC::Runtime::ASM::fmadds(context->f1, context->f6, context->f30, context->f5);
/*801F69A8 001F37A8*/ PPC::Runtime::ASM::bl(fn_801CC660);
RUNTIME_PPC_JUMP_LABEL(.L_801F69AC, 0x801F69AC) //this is a jump label
/*801F69AC 001F37AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f29);
/*801F69B0 001F37B0*/ PPC::Runtime::ASM::bge(.L_801F69B8);
/*801F69B4 001F37B4*/ PPC::Runtime::ASM::fmr(context->f1, context->f29);
RUNTIME_PPC_JUMP_LABEL(.L_801F69B8, 0x801F69B8) //this is a jump label
/*801F69B8 001F37B8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*801F69BC 001F37BC*/ PPC::Runtime::ASM::ble(.L_801F69C4);
/*801F69C0 001F37C0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
RUNTIME_PPC_JUMP_LABEL(.L_801F69C4, 0x801F69C4) //this is a jump label
/*801F69C4 001F37C4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E20B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F69C8 001F37C8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x394, context->r31));
/*801F69CC 001F37CC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f30);
/*801F69D0 001F37D0*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f0, context->f1);
/*801F69D4 001F37D4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801F69D8 001F37D8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801F69DC 001F37DC*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801F69E0 001F37E0*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801F69E4 001F37E4*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801F69E8 001F37E8*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801F69EC 001F37EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801F69F0 001F37F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F69F4 001F37F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F69F8 001F37F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*801F69FC 001F37FC*/ PPC::Runtime::ASM::blr();
}