//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062C4C.hpp"
#include "fn_80062C4C.hpp"



void fn_80190948(PPC::Runtime::GCContext* context)
{
/*80190948 0018D748*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8019094C 0018D74C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80190950 0018D750*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80190954 0018D754*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80190958 0018D758*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8019095C 0018D75C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80190960 0018D760*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80190964 0018D764*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80190968 0018D768*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019096C 0018D76C*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x394, context->r3));
/*80190970 0018D770*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80190974 0018D774*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1088 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80190978 0018D778*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*8019097C 0018D77C*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x398, context->r3));
/*80190980 0018D780*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f0);
/*80190984 0018D784*/ PPC::Runtime::ASM::beq(.L_801909CC);
/*80190988 0018D788*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019098C 0018D78C*/ PPC::Runtime::ASM::fabs(context->f2, context->f31);
/*80190990 0018D790*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E108C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80190994 0018D794*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80190998 0018D798*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x24);
/*8019099C 0018D79C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*801909A0 0018D7A0*/ PPC::Runtime::ASM::fsub(context->f2, context->f2, context->f3);
/*801909A4 0018D7A4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*801909A8 0018D7A8*/ PPC::Runtime::ASM::fdiv(context->f2, context->f2, context->f0);
/*801909AC 0018D7AC*/ PPC::Runtime::ASM::frsp(context->f2, context->f2);
/*801909B0 0018D7B0*/ PPC::Runtime::ASM::bl(fn_80062C4C);
/*801909B4 0018D7B4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1088 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801909B8 0018D7B8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*801909BC 0018D7BC*/ PPC::Runtime::ASM::bge(.L_801909C8);
/*801909C0 0018D7C0*/ PPC::Runtime::ASM::fneg(context->f31, context->f1);
/*801909C4 0018D7C4*/ PPC::Runtime::ASM::b(.L_801909CC);
RUNTIME_PPC_JUMP_LABEL(.L_801909C8, 0x801909C8) //this is a jump label
/*801909C8 0018D7C8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_801909CC, 0x801909CC) //this is a jump label
/*801909CC 0018D7CC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1088 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801909D0 0018D7D0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f30, context->f0);
/*801909D4 0018D7D4*/ PPC::Runtime::ASM::beq(.L_80190A58);
/*801909D8 0018D7D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*801909DC 0018D7DC*/ PPC::Runtime::ASM::bge(.L_801909EC);
/*801909E0 0018D7E0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801909E4 0018D7E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801909E8 0018D7E8*/ PPC::Runtime::ASM::b(.L_801909F8);
RUNTIME_PPC_JUMP_LABEL(.L_801909EC, 0x801909EC) //this is a jump label
/*801909EC 0018D7EC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801909F0 0018D7F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801909F4 0018D7F4*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801909F8, 0x801909F8) //this is a jump label
/*801909F8 0018D7F8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801909FC 0018D7FC*/ PPC::Runtime::ASM::fadds(context->f3, context->f30, context->f0);
/*80190A00 0018D800*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1088 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80190A04 0018D804*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80190A08 0018D808*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80190A0C 0018D80C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*80190A10 0018D810*/ PPC::Runtime::ASM::fdivs(context->f30, context->f3, context->f1);
/*80190A14 0018D814*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*80190A18 0018D818*/ PPC::Runtime::ASM::bge(.L_80190A24);
/*80190A1C 0018D81C*/ PPC::Runtime::ASM::fneg(context->f2, context->f30);
/*80190A20 0018D820*/ PPC::Runtime::ASM::b(.L_80190A28);
RUNTIME_PPC_JUMP_LABEL(.L_80190A24, 0x80190A24) //this is a jump label
/*80190A24 0018D824*/ PPC::Runtime::ASM::fmr(context->f2, context->f30);
RUNTIME_PPC_JUMP_LABEL(.L_80190A28, 0x80190A28) //this is a jump label
/*80190A28 0018D828*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1090 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80190A2C 0018D82C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f2);
/*80190A30 0018D830*/ PPC::Runtime::ASM::beq(.L_80190A58);
/*80190A34 0018D834*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E108C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80190A38 0018D838*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x84);
/*80190A3C 0018D83C*/ PPC::Runtime::ASM::bl(fn_80062C4C);
/*80190A40 0018D840*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1088 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80190A44 0018D844*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*80190A48 0018D848*/ PPC::Runtime::ASM::bge(.L_80190A54);
/*80190A4C 0018D84C*/ PPC::Runtime::ASM::fneg(context->f30, context->f1);
/*80190A50 0018D850*/ PPC::Runtime::ASM::b(.L_80190A58);
RUNTIME_PPC_JUMP_LABEL(.L_80190A54, 0x80190A54) //this is a jump label
/*80190A54 0018D854*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_80190A58, 0x80190A58) //this is a jump label
/*80190A58 0018D858*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80190A5C 0018D85C*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80190A60 0018D860*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80190A64 0018D864*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80190A68 0018D868*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80190A6C 0018D86C*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80190A70 0018D870*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80190A74 0018D874*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80190A78 0018D878*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80190A7C 0018D87C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80190A80 0018D880*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80190A84 0018D884*/ PPC::Runtime::ASM::blr();
}