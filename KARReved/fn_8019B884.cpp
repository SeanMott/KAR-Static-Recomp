//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80195650.hpp"
#include "fn_8019560C.hpp"
#include "fn_80195588.hpp"



void fn_8019B884(PPC::Runtime::GCContext* context)
{
/*8019B884 00198684*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8019B888 00198688*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019B88C 0019868C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8019B890 00198690*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8019B894 00198694*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8019B898 00198698*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019B89C 0019869C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019B8A0 001986A0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019B8A4 001986A4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8019B8A8 001986A8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8019B8AC 001986AC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8019B8B0 001986B0*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8019B8B4 001986B4*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E1198 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019B8B8 001986B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8019B8BC 001986BC*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r7));
/*8019B8C0 001986C0*/ PPC::Runtime::ASM::extrwi(context->r5, context->r3, 16, 6);
/*8019B8C4 001986C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019B8C8 001986C8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r7));
/*8019B8CC 001986CC*/ PPC::Runtime::ASM::addi(context->r0, context->r7, 0x4);
/*8019B8D0 001986D0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019B8D4 001986D4*/ PPC::Runtime::ASM::extrwi(context->r30, context->r6, 1, 30);
/* 8019B8D8 001986D8  54 65 CF FF */ extrwi. context->r5 , context->r3 , 1 , 24
/*8019B8DC 001986DC*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r3, 25);
/*8019B8E0 001986E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8019B8E4 001986E4*/ PPC::Runtime::ASM::clrlwi(context->r29, context->r6, 31);
/*8019B8E8 001986E8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019B8EC 001986EC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8019B8F0 001986F0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8019B8F4 001986F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1188 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8019B8F8 001986F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8019B8FC 001986FC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x4);
/*8019B900 00198700*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f0);
/*8019B904 00198704*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8019B908 00198708*/ PPC::Runtime::ASM::beq(.L_8019B91C);
/*8019B90C 0019870C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8019B910 00198710*/ PPC::Runtime::ASM::ble(.L_8019B91C);
/*8019B914 00198714*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8019B918 00198718*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8019B91C, 0x8019B91C) //this is a jump label
/*8019B91C 0019871C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*8019B920 00198720*/ PPC::Runtime::ASM::beq(.L_8019B954);
/*8019B924 00198724*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*8019B928 00198728*/ PPC::Runtime::ASM::beq(.L_8019B940);
/*8019B92C 0019872C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8019B930 00198730*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8019B934 00198734*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8019B938 00198738*/ PPC::Runtime::ASM::bl(fn_80195650);
/*8019B93C 0019873C*/ PPC::Runtime::ASM::b(.L_8019B964);
RUNTIME_PPC_JUMP_LABEL(.L_8019B940, 0x8019B940) //this is a jump label
/*8019B940 00198740*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8019B944 00198744*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8019B948 00198748*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8019B94C 0019874C*/ PPC::Runtime::ASM::bl(fn_8019560C);
/*8019B950 00198750*/ PPC::Runtime::ASM::b(.L_8019B964);
RUNTIME_PPC_JUMP_LABEL(.L_8019B954, 0x8019B954) //this is a jump label
/*8019B954 00198754*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8019B958 00198758*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8019B95C 0019875C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8019B960 00198760*/ PPC::Runtime::ASM::bl(fn_80195588);
RUNTIME_PPC_JUMP_LABEL(.L_8019B964, 0x8019B964) //this is a jump label
/*8019B964 00198764*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8019B968 00198768*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8019B96C 0019876C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8019B970 00198770*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019B974 00198774*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8019B978 00198778*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019B97C 0019877C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8019B980 00198780*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019B984 00198784*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8019B988 00198788*/ PPC::Runtime::ASM::blr();
}