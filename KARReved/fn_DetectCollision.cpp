//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_memcmp.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_memcmp.hpp"
#include "fn_IPSetConfigError.hpp"
#include "fn_memcmp.hpp"
#include "fn_8047A09C.hpp"



void fn_DetectCollision(PPC::Runtime::GCContext* context)
{
/*8046C7F8 004695F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8046C7FC 004695FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8046C800 00469600*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*8046C804 00469604*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8046C808 00469608*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8046C80C 0046960C*/ PPC::Runtime::ASM::addi(context->r28, context->r4, 0x0);
/*8046C810 00469610*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r3));
/*8046C814 00469614*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046C818 00469618*/ PPC::Runtime::ASM::mr(context->r30, context->r0);
/*8046C81C 0046961C*/ PPC::Runtime::ASM::bne(.L_8046C828);
/*8046C820 00469620*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8046C824 00469624*/ PPC::Runtime::ASM::b(.L_8046C82C);
RUNTIME_PPC_JUMP_LABEL(.L_8046C828, 0x8046C828) //this is a jump label
/*8046C828 00469628*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8046C82C, 0x8046C82C) //this is a jump label
/*8046C82C 0046962C*/ PPC::Runtime::ASM::addi(context->r31, context->r28, 0x8);
/*8046C830 00469630*/ PPC::Runtime::ASM::mr(context->r29, context->r0);
/*8046C834 00469634*/ PPC::Runtime::ASM::b(.L_8046C8EC);
RUNTIME_PPC_JUMP_LABEL(.L_8046C838, 0x8046C838) //this is a jump label
/*8046C838 00469638*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8046C83C 0046963C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8046C840 00469640*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*8046C844 00469644*/ PPC::Runtime::ASM::beq(.L_8046C8D0);
/*8046C848 00469648*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8046C84C 0046964C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x8);
/*8046C850 00469650*/ PPC::Runtime::ASM::lwzx(context->r0, context->r28, context->r0);
/*8046C854 00469654*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*8046C858 00469658*/ PPC::Runtime::ASM::bne(.L_8046C874);
/*8046C85C 0046965C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8046C860 00469660*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x38);
/*8046C864 00469664*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*8046C868 00469668*/ PPC::Runtime::ASM::bl(fn_memcmp);
/*8046C86C 0046966C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8046C870 00469670*/ PPC::Runtime::ASM::bne(.L_8046C8AC);
RUNTIME_PPC_JUMP_LABEL(.L_8046C874, 0x8046C874) //this is a jump label
/*8046C874 00469674*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8046C878 00469678*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r28));
/*8046C87C 0046967C*/ PPC::Runtime::ASM::slwi(context->r4, context->r5, 1);
/*8046C880 00469680*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8046C884 00469684*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*8046C888 00469688*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x8);
/*8046C88C 0046968C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r28, context->r3);
/*8046C890 00469690*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8046C894 00469694*/ PPC::Runtime::ASM::bne(.L_8046C8D0);
/*8046C898 00469698*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0x8);
/*8046C89C 0046969C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8046C8A0 004696A0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r28, context->r3);
/*8046C8A4 004696A4*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8046C8A8 004696A8*/ PPC::Runtime::ASM::bne(.L_8046C8D0);
RUNTIME_PPC_JUMP_LABEL(.L_8046C8AC, 0x8046C8AC) //this is a jump label
/*8046C8AC 004696AC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10);
/*8046C8B0 004696B0*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*8046C8B4 004696B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8046C8B8 004696B8*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8046C8BC 004696BC*/ PPC::Runtime::ASM::beq(.L_8046C8D0);
/*8046C8C0 004696C0*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8046C8C4 004696C4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8046C8C8 004696C8*/ PPC::Runtime::ASM::li(context->r4, -0x6f);
/* 8046C8CC 004696CC  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_8046C8D0, 0x8046C8D0) //this is a jump label
/*8046C8D0 004696D0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8046C8D4 004696D4*/ PPC::Runtime::ASM::addi(context->r30, context->r29, 0x0);
/*8046C8D8 004696D8*/ PPC::Runtime::ASM::bne(.L_8046C8E4);
/*8046C8DC 004696DC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8046C8E0 004696E0*/ PPC::Runtime::ASM::b(.L_8046C8E8);
RUNTIME_PPC_JUMP_LABEL(.L_8046C8E4, 0x8046C8E4) //this is a jump label
/*8046C8E4 004696E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8046C8E8, 0x8046C8E8) //this is a jump label
/*8046C8E8 004696E8*/ PPC::Runtime::ASM::mr(context->r29, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8046C8EC, 0x8046C8EC) //this is a jump label
/*8046C8EC 004696EC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8046C8F0 004696F0*/ PPC::Runtime::ASM::bne(.L_8046C838);
/*8046C8F4 004696F4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8046C8F8 004696F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r27));
/*8046C8FC 004696FC*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*8046C900 00469700*/ PPC::Runtime::ASM::beq(.L_8046C944);
/*8046C904 00469704*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8046C908 00469708*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x8);
/*8046C90C 0046970C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r28, context->r0);
/*8046C910 00469710*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*8046C914 00469714*/ PPC::Runtime::ASM::bne(.L_8046C944);
/*8046C918 00469718*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8046C91C 0046971C*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x38);
/*8046C920 00469720*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*8046C924 00469724*/ PPC::Runtime::ASM::bl(fn_memcmp);
/*8046C928 00469728*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8046C92C 0046972C*/ PPC::Runtime::ASM::beq(.L_8046C944);
/*8046C930 00469730*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x0);
/*8046C934 00469734*/ PPC::Runtime::ASM::li(context->r4, -0x6f);
/*8046C938 00469738*/ PPC::Runtime::ASM::bl(fn_IPSetConfigError);
/*8046C93C 0046973C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8046C940 00469740*/ PPC::Runtime::ASM::b(.L_8046C990);
RUNTIME_PPC_JUMP_LABEL(.L_8046C944, 0x8046C944) //this is a jump label
/*8046C944 00469744*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8046C948 00469748*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r27));
/*8046C94C 0046974C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*8046C950 00469750*/ PPC::Runtime::ASM::beq(.L_8046C98C);
/*8046C954 00469754*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8046C958 00469758*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x8);
/*8046C95C 0046975C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r28, context->r0);
/*8046C960 00469760*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*8046C964 00469764*/ PPC::Runtime::ASM::bne(.L_8046C98C);
/*8046C968 00469768*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8046C96C 0046976C*/ PPC::Runtime::ASM::addi(context->r4, context->r27, 0x38);
/*8046C970 00469770*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*8046C974 00469774*/ PPC::Runtime::ASM::bl(fn_memcmp);
/*8046C978 00469778*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8046C97C 0046977C*/ PPC::Runtime::ASM::beq(.L_8046C98C);
/*8046C980 00469780*/ PPC::Runtime::ASM::bl(fn_8047A09C);
/*8046C984 00469784*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8046C988 00469788*/ PPC::Runtime::ASM::b(.L_8046C990);
RUNTIME_PPC_JUMP_LABEL(.L_8046C98C, 0x8046C98C) //this is a jump label
/*8046C98C 0046978C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8046C990, 0x8046C990) //this is a jump label
/*8046C990 00469790*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8046C994 00469794*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8046C998 00469798*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*8046C99C 0046979C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8046C9A0 004697A0*/ PPC::Runtime::ASM::blr();
}