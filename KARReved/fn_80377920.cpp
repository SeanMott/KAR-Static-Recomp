//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80377920(PPC::Runtime::GCContext* context)
{
/*80377920 00374720*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80377924 00374724*/ PPC::Runtime::ASM::mflr(context->r0);
/*80377928 00374728*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037792C 0037472C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80377930 00374730*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80377934 00374734*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80377938 00374738*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8037793C 0037473C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80377940 00374740*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80377944 00374744*/ PPC::Runtime::ASM::addi(context->r30, context->r28, 0x4);
/*80377948 00374748*/ PPC::Runtime::ASM::b(.L_80377970);
RUNTIME_PPC_JUMP_LABEL(.L_8037794C, 0x8037794C) //this is a jump label
/*8037794C 0037474C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80377950 00374750*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80377954 00374754*/ PPC::Runtime::ASM::bl(fn_strcmp);
/*80377958 00374758*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8037795C 0037475C*/ PPC::Runtime::ASM::blt(.L_8037796C);
/*80377960 00374760*/ PPC::Runtime::ASM::mr(context->r30, context->r31);
/*80377964 00374764*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80377968 00374768*/ PPC::Runtime::ASM::b(.L_80377970);
RUNTIME_PPC_JUMP_LABEL(.L_8037796C, 0x8037796C) //this is a jump label
/*8037796C 0037476C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80377970, 0x80377970) //this is a jump label
/*80377970 00374770*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80377974 00374774*/ PPC::Runtime::ASM::bne(.L_8037794C);
/*80377978 00374778*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0x4);
/*8037797C 0037477C*/ PPC::Runtime::ASM::cmplw(context->r30, context->r0);
/*80377980 00374780*/ PPC::Runtime::ASM::beq(.L_80377998);
/*80377984 00374784*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80377988 00374788*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8037798C 0037478C*/ PPC::Runtime::ASM::bl(fn_strcmp);
/*80377990 00374790*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80377994 00374794*/ PPC::Runtime::ASM::bge(.L_803779A4);
RUNTIME_PPC_JUMP_LABEL(.L_80377998, 0x80377998) //this is a jump label
/*80377998 00374798*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0x4);
/*8037799C 0037479C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803779A0 003747A0*/ PPC::Runtime::ASM::b(.L_803779A8);
RUNTIME_PPC_JUMP_LABEL(.L_803779A4, 0x803779A4) //this is a jump label
/*803779A4 003747A4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_803779A8, 0x803779A8) //this is a jump label
/*803779A8 003747A8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*803779AC 003747AC*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*803779B0 003747B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803779B4 003747B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803779B8 003747B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803779BC 003747BC*/ PPC::Runtime::ASM::blr();
}