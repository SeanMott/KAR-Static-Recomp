//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005D64C.hpp"
#include "fn_8005D64C.hpp"
#include "fn_8005E08C.hpp"
#include "fn_8005D64C.hpp"
#include "fn_8005D64C.hpp"
#include "fn_8005E08C.hpp"



void fn_80378900(PPC::Runtime::GCContext* context)
{
/*80378900 00375700*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80378904 00375704*/ PPC::Runtime::ASM::mflr(context->r0);
/*80378908 00375708*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8037890C 0037570C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80378910 00375710*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80378914 00375714*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80378918 00375718*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8037891C 0037571C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/* 80378920 00375720  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*80378924 00375724*/ PPC::Runtime::ASM::beq(.L_803789A0);
/*80378928 00375728*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037892C 0037572C*/ PPC::Runtime::ASM::mr(context->r31, context->r28);
/*80378930 00375730*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80378934 00375734*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80378938, 0x80378938) //this is a jump label
/*80378938 00375738*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8037893C 0037573C*/ PPC::Runtime::ASM::bl(fn_8005D64C);
/*80378940 00375740*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80378944 00375744*/ PPC::Runtime::ASM::bl(fn_8005D64C);
/*80378948 00375748*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8037894C 0037574C*/ PPC::Runtime::ASM::bl(fn_8005E08C);
/*80378950 00375750*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80378954 00375754*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x18);
/*80378958 00375758*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*8037895C 0037575C*/ PPC::Runtime::ASM::blt(.L_80378938);
/*80378960 00375760*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80378964 00375764*/ PPC::Runtime::ASM::mr(context->r31, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_80378968, 0x80378968) //this is a jump label
/*80378968 00375768*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r31));
/*8037896C 0037576C*/ PPC::Runtime::ASM::bl(fn_8005D64C);
/*80378970 00375770*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80378974 00375774*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*80378978 00375778*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*8037897C 0037577C*/ PPC::Runtime::ASM::blt(.L_80378968);
/*80378980 00375780*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r28));
/*80378984 00375784*/ PPC::Runtime::ASM::bl(fn_8005D64C);
/*80378988 00375788*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r28));
/*8037898C 0037578C*/ PPC::Runtime::ASM::bl(fn_8005E08C);
/*80378990 00375790*/ PPC::Runtime::ASM::extsh.(context->r0, context->r29);
/*80378994 00375794*/ PPC::Runtime::ASM::ble(.L_803789A0);
/*80378998 00375798*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8037899C 0037579C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_803789A0, 0x803789A0) //this is a jump label
/*803789A0 003757A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803789A4 003757A4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803789A8 003757A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803789AC 003757AC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803789B0 003757B0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803789B4 003757B4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803789B8 003757B8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803789BC 003757BC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803789C0 003757C0*/ PPC::Runtime::ASM::blr();
}