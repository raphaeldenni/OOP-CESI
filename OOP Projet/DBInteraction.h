#pragma once
ref class DBInteraction
{
private:
	System::String^ DB_Link;
	System::String^ DB_txt_Commande;
	System::Data::SqlClient::SqlConnection^ DB_Connexion;
	System::Data::SqlClient::SqlCommand^ DB_Commande;
	System::Data::SqlClient::SqlDataAdapter^ DB_Data_Adapter;
	System::Data::DataSet^ DB_Data_Set;
public:
	DBInteraction();
	System::Data::DataSet^ getRows(System::String^, System::String^);
	void actionRows(System::String^);
};

