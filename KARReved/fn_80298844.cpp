//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80298844(PPC::Runtime::GCContext* context)
{
/*80298844 00295644*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80298848 00295648*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029884C 0029564C*/ PPC::Runtime::ASM::cmplwi(context->r7, 0xe);
/*80298850 00295650*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80298854 00295654*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80298858 00295658*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*8029885C 0029565C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80298860 00295660*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80298864 00295664*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80298868 00295668*/ PPC::Runtime::ASM::mr(context->r29, context->r6);
/*8029886C 0029566C*/ PPC::Runtime::ASM::bgt(.L_80298A48);
/*80298870 00295670*/ PPC::Runtime::ASM::lis(context->r3, jumptable_804BE564 @ Get_MemoryOffset_HighBit);
/*80298874 00295674*/ PPC::Runtime::ASM::slwi(context->r0, context->r7, 2);
/*80298878 00295678*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_804BE564 @ Get_MemoryOffset_LowBit);
/*8029887C 0029567C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*80298880 00295680*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80298884 00295684*/ PPC::Runtime::ASM::bctr();
/*80298888 00295688*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*8029888C 0029568C*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*80298890 00295690*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80298894 00295694*/ PPC::Runtime::ASM::beq(.L_80298A4C);
/*80298898 00295698*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F120C @ Get_MemoryOffset_HighBit);
/*8029889C 0029569C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE880 @ Get_MemoryOffset_HighBit);
/*802988A0 002956A0*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F120C @ Get_MemoryOffset_LowBit);
/*802988A4 002956A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802988A8 002956A8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE880 @ Get_MemoryOffset_LowBit);
/*802988AC 002956AC*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802988B0 002956B0*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*802988B4 002956B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802988B8 002956B8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802988BC 002956BC*/ PPC::Runtime::ASM::b(.L_80298A4C);
/*802988C0 002956C0*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*802988C4 002956C4*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*802988C8 002956C8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802988CC 002956CC*/ PPC::Runtime::ASM::beq(.L_80298A4C);
/*802988D0 002956D0*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F120C @ Get_MemoryOffset_HighBit);
/*802988D4 002956D4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE824 @ Get_MemoryOffset_HighBit);
/*802988D8 002956D8*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F120C @ Get_MemoryOffset_LowBit);
/*802988DC 002956DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802988E0 002956E0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE824 @ Get_MemoryOffset_LowBit);
/*802988E4 002956E4*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802988E8 002956E8*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*802988EC 002956EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802988F0 002956F0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802988F4 002956F4*/ PPC::Runtime::ASM::b(.L_80298A4C);
/*802988F8 002956F8*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*802988FC 002956FC*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*80298900 00295700*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80298904 00295704*/ PPC::Runtime::ASM::beq(.L_80298A4C);
/*80298908 00295708*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F120C @ Get_MemoryOffset_HighBit);
/*8029890C 0029570C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE7C8 @ Get_MemoryOffset_HighBit);
/*80298910 00295710*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F120C @ Get_MemoryOffset_LowBit);
/*80298914 00295714*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80298918 00295718*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE7C8 @ Get_MemoryOffset_LowBit);
/*8029891C 0029571C*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80298920 00295720*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80298924 00295724*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80298928 00295728*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029892C 0029572C*/ PPC::Runtime::ASM::b(.L_80298A4C);
/*80298930 00295730*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*80298934 00295734*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*80298938 00295738*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8029893C 0029573C*/ PPC::Runtime::ASM::beq(.L_80298A4C);
/*80298940 00295740*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F120C @ Get_MemoryOffset_HighBit);
/*80298944 00295744*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE76C @ Get_MemoryOffset_HighBit);
/*80298948 00295748*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F120C @ Get_MemoryOffset_LowBit);
/*8029894C 0029574C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80298950 00295750*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE76C @ Get_MemoryOffset_LowBit);
/*80298954 00295754*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80298958 00295758*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*8029895C 0029575C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80298960 00295760*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80298964 00295764*/ PPC::Runtime::ASM::b(.L_80298A4C);
/*80298968 00295768*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*8029896C 0029576C*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*80298970 00295770*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80298974 00295774*/ PPC::Runtime::ASM::beq(.L_80298A4C);
/*80298978 00295778*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F120C @ Get_MemoryOffset_HighBit);
/*8029897C 0029577C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE710 @ Get_MemoryOffset_HighBit);
/*80298980 00295780*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F120C @ Get_MemoryOffset_LowBit);
/*80298984 00295784*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80298988 00295788*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE710 @ Get_MemoryOffset_LowBit);
/*8029898C 0029578C*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80298990 00295790*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80298994 00295794*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80298998 00295798*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029899C 0029579C*/ PPC::Runtime::ASM::b(.L_80298A4C);
/*802989A0 002957A0*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*802989A4 002957A4*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*802989A8 002957A8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802989AC 002957AC*/ PPC::Runtime::ASM::beq(.L_80298A4C);
/*802989B0 002957B0*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F120C @ Get_MemoryOffset_HighBit);
/*802989B4 002957B4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE6B4 @ Get_MemoryOffset_HighBit);
/*802989B8 002957B8*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F120C @ Get_MemoryOffset_LowBit);
/*802989BC 002957BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802989C0 002957C0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE6B4 @ Get_MemoryOffset_LowBit);
/*802989C4 002957C4*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802989C8 002957C8*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*802989CC 002957CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802989D0 002957D0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802989D4 002957D4*/ PPC::Runtime::ASM::b(.L_80298A4C);
/*802989D8 002957D8*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*802989DC 002957DC*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*802989E0 002957E0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802989E4 002957E4*/ PPC::Runtime::ASM::beq(.L_80298A4C);
/*802989E8 002957E8*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F120C @ Get_MemoryOffset_HighBit);
/*802989EC 002957EC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE658 @ Get_MemoryOffset_HighBit);
/*802989F0 002957F0*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F120C @ Get_MemoryOffset_LowBit);
/*802989F4 002957F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802989F8 002957F8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE658 @ Get_MemoryOffset_LowBit);
/*802989FC 002957FC*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80298A00 00295800*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80298A04 00295804*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80298A08 00295808*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80298A0C 0029580C*/ PPC::Runtime::ASM::b(.L_80298A4C);
/*80298A10 00295810*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*80298A14 00295814*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*80298A18 00295818*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80298A1C 0029581C*/ PPC::Runtime::ASM::beq(.L_80298A4C);
/*80298A20 00295820*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F120C @ Get_MemoryOffset_HighBit);
/*80298A24 00295824*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE5FC @ Get_MemoryOffset_HighBit);
/*80298A28 00295828*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F120C @ Get_MemoryOffset_LowBit);
/*80298A2C 0029582C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80298A30 00295830*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE5FC @ Get_MemoryOffset_LowBit);
/*80298A34 00295834*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80298A38 00295838*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80298A3C 0029583C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80298A40 00295840*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80298A44 00295844*/ PPC::Runtime::ASM::b(.L_80298A4C);
RUNTIME_PPC_JUMP_LABEL(.L_80298A48, 0x80298A48) //this is a jump label
/*80298A48 00295848*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80298A4C, 0x80298A4C) //this is a jump label
/*80298A4C 0029584C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80298A50 00295850*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80298A54 00295854*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80298A58 00295858*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80298A5C 0029585C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80298A60 00295860*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80298A64 00295864*/ PPC::Runtime::ASM::blr();
}